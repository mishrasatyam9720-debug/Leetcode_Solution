class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m1;
        for(int i=0 ; i<arr.size();i++){
            m1[arr[i]]++;
        }
        int ans=-1;
        for(auto &i:m1){
            if(i.first==i.second){
                ans=max(ans,i.first);
            }
        }
        return ans ;
    }
};