
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        long long N = 1LL * n * n;

        vector<int> ans;

        long long sum_1 = (N * (N + 1)) / 2;
        long long sum_2 = (N * (N + 1) * (2 * N + 1)) / 6;

        long long sum_3 = 0;
        long long sum_4 = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                sum_3 += grid[i][j];
                sum_4 += 1LL * grid[i][j] * grid[i][j];

            }
        }

        long long val_1 = sum_1 - sum_3;
        long long val_2 = sum_2 - sum_4;

        val_2 = val_2 / val_1;

        ans.push_back((val_2 - val_1) / 2);
        ans.push_back((val_2 + val_1) / 2);

        return ans;
    }
};
