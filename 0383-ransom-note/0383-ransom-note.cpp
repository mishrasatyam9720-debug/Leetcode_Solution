class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int>m1;
      for(int i=0 ; i<ransomNote.size();i++){
        m1[ransomNote[i]]++;
      }
      for(int i=0 ; i<magazine.size();i++){
        m1[magazine[i]]--;
      }  
      for(auto &i:m1){
        if(i.second>0){
            return false ;
        }
      }
      return true ;
    }
};