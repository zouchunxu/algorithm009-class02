#include <unordered_map>
#include <string>
#include <vector>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       int sub=0;
        vector<vector<string>> res;
        unordered_map<string,int> m;
        for(int i=0;i<strs.size();i++){
            string tmp = strs[i];
            sort(tmp.begin(),tmp.end());
            if(m.count(tmp)) {
                res[m[tmp]].push_back(strs[i]);
            } else {
                m[tmp] = sub++;
                res.push_back({strs[i]});
            }
        }
        return res;
    }
};
