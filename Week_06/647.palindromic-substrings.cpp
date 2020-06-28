class Solution {
public:
    int countSubstrings(string s) {
        if (s.empty()) return 0;
        int size = s.size(), res = s.size();
        vector<vector<bool>> dp(size, vector<bool>(size));
        for (int len=1;len < s.size();len++) {
            for (int i=0;i<s.size();i++) {
                int j = i + len;
                if (j < s.size()) {
                    if (s[i] == s[j]) {
                        dp[i][j] = len <= 2 ? 1 : dp[i+1][j-1];
                    } else {
                        dp[i][j] = 0;
                    }
                    res+=dp[i][j];
                }

            }
        }
        return res;
    }
};