#include <vector>

using namespace std;

class UnionFInd {
public:
    vector<int> v;

    UnionFInd(int n) {
        for (int i = 0; i < n; i++) {
            v.push_back(i);
        }
    }

    void munion(int i, int j) {
        int pi = find(i);
        int pj = find(j);
        if (pi != pj) {
            v[pi] = v[pj];
        }
    }

    int find(int i) {
        while (v[i] != i) {
            i = v[i];
        }
        return i;
    }

    int count() {
        int cnt = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == i) cnt++;
        }
        return cnt;
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>> &M) {
        int n = M.size();
        UnionFInd u(n);
        for (int i = 0; i < M.size(); i++) {
            for (int j = i + 1; j < M[0].size(); j++) {
                if(M[i][j] == 1) u.munion(i, j);
            }
        }

        return u.count();
    }
};
