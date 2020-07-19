#include <string>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int length = s.size();
        int i = 0;
        while (i < length) {
            int end = min(i+k,length);
            reverse(s.begin()+i,s.begin()+end);
            i += 2 * k;
        }
        return s;
    }
};
