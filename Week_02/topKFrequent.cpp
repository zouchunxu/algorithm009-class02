#include <map>
#include <vector>
#include <queue>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int> >,less<pair<int,int> > > q;

        for (auto mm:m) {
            q.push(make_pair(mm.second,mm.first));
        }
        vector<int> res;
        for(int i=0;i<k;i++){
            auto tmp = q.top();
            q.pop();
            res.push_back(tmp.second);
        }
        return res;
    }
};
