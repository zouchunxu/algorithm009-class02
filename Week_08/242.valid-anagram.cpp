class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for (int i=0;i<s.size();i++) {
            m[s[i]]++;
        }
        unordered_map<char,int> m1;
        for (int i=0;i<t.size();i++) {
            m1[t[i]]++;
        }
        if (m1.size() != m.size()) return false;
        for (auto it : m) {
            if(m1[it.first] != m[it.first]) return false;
        }
        return true;
    }
};
