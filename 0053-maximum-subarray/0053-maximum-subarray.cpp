class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int cs=0;
        for (int i =0 ; i< nums.size();i++){
            cs=cs+nums[i];
            max_sum=max(max_sum,cs);
            if ( cs<0){
                cs=0;
            }
        
        }
        return max_sum ;
    }
};