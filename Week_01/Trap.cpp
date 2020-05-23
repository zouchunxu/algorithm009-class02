#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int ret = 0;
        stack<int> s;
        for (int i=0;i<size;i++) {
            while (!s.empty() && height[s.top()] < height[i]) {
                int tmp = height[s.top()];
                s.pop();
                if (s.empty()) {
                    break;
                }
                int distance = i - s.top() - 1;
                int m = min(height[s.top()],height[i]);
                ret += (m-tmp)  * distance;
            }
            s.push(i);
        }
        return ret;
    }
};
