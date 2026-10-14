class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m1;

        int left = 0 ;
        int ans =0 ;

        for(int right=0 ; right<s.size();right++){
            if(m1.find(s[right])!=m1.end() && m1[s[right]]>=left){
                left = m1[s[right]]+1;
            }
                 
                m1[s[right]]=right;

            ans=max(ans,right-left+1);
        } 
        return ans ;
    }
};