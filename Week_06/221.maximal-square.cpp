#include <vector>

using namespace std;

class Solution {
public:
    int maximalSquare(vector <vector<char>> &matrix) {
        if (matrix.size() < 1) return 0;
        vector <vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        int m = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == '1') {
                    if (i == 0 || j == 0) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                    }
                    m = max(m, dp[i][j]);
                }
            }
        }
        return m * m;
    }
};