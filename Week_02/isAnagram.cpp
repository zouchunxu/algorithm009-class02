#include <map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();
        if(sSize != tSize) return false;
        map<int,int> sMap;
        map<int,int> tMap;
        for (int i=0;i<s.size();i++){
            sMap[t[i]-'a']++;
            tMap[s[i]-'a']++;
        }
        for (auto m:sMap) {
            if(m.second != tMap[m.first]) return false;
        }
        return true;
    }
};
