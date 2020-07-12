class Solution {
public:
    int count = 0;
    int totalNQueens(int n) {
        if (n < 1) return 0; 
        dfs(n,0,0,0,0);
        return count;     
    }
    void dfs(int n,int row,int cols,int pie,int na ) {
        if (row >= n) {
            count++;
            return ;
        }
        int bits = (~(cols | pie | na)) & ((1 << n) - 1);
        while (bits) {
            int p = bits & -bits;
            bits = bits & (bits - 1);
            dfs(n,row+1,cols|p,(pie|p)<<1,(na|p)>>1);
        }
    }
};
