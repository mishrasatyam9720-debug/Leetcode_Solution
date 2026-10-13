class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>m1;

        if(s.size()!=t.size()){
            return false ;
        }
        for (int i =0 ; i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0 ; i<t.size();i++){
            m1[t[i]]--;
        }
        for(auto &i :m1){
            if(i.second!=0){
                return false ;
            }
        }
        return true ;
    }
};