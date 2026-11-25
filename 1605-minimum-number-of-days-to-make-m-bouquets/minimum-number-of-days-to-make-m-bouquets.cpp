class Solution {
public:

    bool cond_satisfy(vector<int>& bloomDay, int mid, int m, int k) {

        int count = 0;
        int total_bouquet = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= mid) {
                count++;
            }
            else {
                total_bouquet += count / k;
                count = 0;
            }
        }

        total_bouquet += count / k;

        return total_bouquet >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        if (1LL * m * k > n)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (cond_satisfy(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};