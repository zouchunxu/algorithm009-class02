#include <vector>

class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> combine(int n, int k) {
        dfs({},1,0,n,k);
        return ret;
    }

    void dfs(vector<int> res,int s,int count,int n,int k) {
        if (count == k) {
            ret.push_back(res);
            return;
        }
        for (int i=s;i<=n;i++) {
            res.push_back(i);
            dfs(res,i+1,count+1,n,k);
            res.pop_back();
        }

    }
};
