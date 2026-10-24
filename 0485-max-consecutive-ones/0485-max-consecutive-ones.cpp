class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        int maximum_count=0;
        for ( int i = 0 ;i<nums.size();i++){
            if(nums[i]==0){
                count=0 ;
            }
            else{
                count=count+1;
                maximum_count=max(count,maximum_count);
            }
        }
        return maximum_count ;
    }
};