#include <vector>
#include <queue>

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> res;
        priority_queue<int,vector<int>, greater<int> >q;
        for(int i=0;i<arr.size();i++){
            q.push(arr[i]);
        }
        for(int i=0;i<k;i++){
            res.push_back(q.top());
            q.pop();
        }
        return res;
    }
};
