class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int maximum = -1 ; 
        int temp ;
        for ( int i = nums.size()-1 ; i>=0 ; i--){
            temp=nums[i];
            nums[i]=maximum;
            maximum=max(maximum,temp);
        }

        return nums ;

    }
};