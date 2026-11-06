class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int,int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        int count = 0, ans = 0;

        for (auto &i : m) {

            if (m.find(i.first - 1) == m.end()) {

                int x = i.first;
                count = 1;

                while (m.find(x + 1) != m.end()) {
                    count++;
                    x++;
                }

                ans = max(count, ans);
            }
        }

        return ans;
    }
};