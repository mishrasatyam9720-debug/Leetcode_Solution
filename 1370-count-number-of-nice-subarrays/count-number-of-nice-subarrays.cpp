class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
        }

        int n = nums.size(), val, count = 0;
        unordered_map<int, int> m;
        vector<int> prefix_sum(n);

        m[0] = 1;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                prefix_sum[i] = nums[i];
            } else {
                prefix_sum[i] = prefix_sum[i - 1] + nums[i];
            }

            val = prefix_sum[i] - k;

            if (m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefix_sum[i]]++;
        }

        return count;
    }
};