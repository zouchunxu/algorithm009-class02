#include <vector>

class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        dfs(nums, 0);
        return ans;
    }

    void dfs(vector<int> &nums, int idx) {
        int n = nums.size();
        if (idx == n) { 
            ans.emplace_back(nums);
            return;
        }

        map<int,int> s;
        for (int i = idx; i < n; ++i) {
            if (s.count(nums[i])) continue; 

            s[nums[i]] = 1;
            
            swap(nums[idx],nums[i]);
            dfs(nums, idx + 1);  

            s[nums[i]] = 0;
            swap(nums[idx],nums[i]);
        }
    }
};

