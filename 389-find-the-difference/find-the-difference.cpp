
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m1;

        for (int i = 0; i < t.size(); i++) {
            m1[t[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            m1[s[i]]--;
        }

        for (auto &i : m1) {
            if (i.second > 0) {
                return i.first;
            }
        }

        return ' ';
    }
};
