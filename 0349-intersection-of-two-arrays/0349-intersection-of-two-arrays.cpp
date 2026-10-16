class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1;
        for (int i =0 ; i<nums1.size() ; i++){
            m1[nums1[i]]++;
        }
        unordered_set<int>ans;
        for (int i =0 ; i<nums2.size() ; i++){
            if (m1.find(nums2[i])!=m1.end()){
              ans.insert(nums2[i]);
            }
        }
         return vector<int>(ans.begin(), ans.end());
    }
};