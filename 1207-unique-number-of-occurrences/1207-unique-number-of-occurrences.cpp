class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m1;

        for(int i=0 ;i<arr.size() ;i++){
            m1[arr[i]]++;
        }
        unordered_set<int>ans ;
        for(auto &i:m1){
            if(ans.find(i.second)!=ans.end()){
                return false ;
            }
            ans.insert(i.second);
        }
        return true ;
    }
};