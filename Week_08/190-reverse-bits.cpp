class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t bit = 31;
        uint32_t ans = 0;
        while (n != 0) {
            ans += (n & 1) << bit;
            n = n >> 1;
            bit--;
        }
        return ans;
    }
};
