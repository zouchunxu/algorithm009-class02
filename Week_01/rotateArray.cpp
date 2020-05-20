#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = 0;
        for (int start=0;count < nums.size();start++) {
            int current = start;
            int prev = nums[current];
            do {
                int next = (current + k) % nums.size();
                swap(prev,nums[next]);
                current = next;
                count++;
            } while(start != current);
        }
    }
};
