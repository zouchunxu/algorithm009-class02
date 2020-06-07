#include <vector>

class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums,0);
        return ret;
    }

    void dfs (vector<int>& nums,int count) {
        if(count == nums.size()) {
            ret.push_back(nums);
        }
        for(int i=count;i<nums.size();i++){
            swap(nums[count],nums[i]);
            dfs(nums,count+1);
            swap(nums[count],nums[i]);
        }
    }
};
