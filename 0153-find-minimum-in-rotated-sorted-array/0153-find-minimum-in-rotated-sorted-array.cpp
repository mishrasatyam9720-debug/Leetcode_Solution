class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 ;
        int high = nums.size()-1 ;
       
        int min_element=INT_MAX; 
        while(low<=high){
        int mid = low+(high-low)/2 ;
        if(nums[mid] <= nums[high]){
            min_element=min(nums[mid],min_element) ; 
            high=mid-1 ;
        }
        else if(nums[high]>nums[low]){
            min_element=min(nums[low],min_element) ;
            break ;
        }
        else {
            min_element=min(nums[mid],min_element) ;
            low=mid+1 ;
        }}
        return min_element ;
    }
};