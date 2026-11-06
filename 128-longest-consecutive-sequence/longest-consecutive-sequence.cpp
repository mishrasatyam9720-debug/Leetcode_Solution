class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     map<int,int>m;
     for (int i =0 ; i <nums.size() ; i++){
        m[nums[i]]++;
     }   
     int count = 0 ,ans = 0 ;
     for (auto &i:m){
        if (m.find(i.first-1)==m.end()){
          
          count=0;
        }
        count ++;
        ans=max(count,ans );
       
     }
     return ans ;
    }
};