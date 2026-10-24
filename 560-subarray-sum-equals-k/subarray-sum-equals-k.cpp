class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    
     vector<int>prefix_sum(n);
     int val ;
    prefix_sum[0]=nums[0];   
    for(int i = 1 ; i<nums.size() ; i++){
        prefix_sum[i] = prefix_sum[i-1] + nums[i]; 
    } 

    unordered_map<int,int>m;
    m[0]=1;
     int count = 0 ;
     for ( int i =0 ; i<nums.size() ; i++){
        
    val=prefix_sum[i]-k;
    if(m.find(val)!=m.end()){
        count+=m[val];
    }
   
    m[prefix_sum[i]]++;
     } 
     return count ;
    }
};