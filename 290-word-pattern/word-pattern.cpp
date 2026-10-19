
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        unordered_map<string, char> m2;

        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string w = words[i];

            if (m.find(ch) != m.end() && m[ch] != w) {
                return false;
            }

            if (m2.find(w) != m2.end() && m2[w] != ch) {
                return false;
            }

            m[ch] = w;
            m2[w] = ch;
        }

        return true;
    }
};
