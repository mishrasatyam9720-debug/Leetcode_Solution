class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Reverse the entire array
        int i = 0, j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        // Reverse first k elements
        i = 0;
        j = k - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        // Reverse remaining elements
        i = k;
        j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};