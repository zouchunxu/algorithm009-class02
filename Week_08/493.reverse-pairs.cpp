class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return dfs(nums,0,nums.size()-1);
    }
    int dfs(vector<int> &nums,int s,int e) {
        if(s >= e) return 0 ;
        int mid = (s + e) / 2;
        int count = dfs(nums, s, mid) + dfs(nums, mid + 1, e);
        int j = mid + 1;
        for (int i=s;i<=mid;i++) {
            while (j <= e && (long)nums[i] > (long)2 * nums[j]) {
                j++;
            }
            count += j - (mid + 1);
        }
        int k = s;
        j = mid + 1;
        vector<int> tmp;
        while (s < mid + 1 && j <= e) {
            while (s < mid + 1 && nums[s] <= nums[j]) tmp.push_back(nums[s++]);
            while (j <= e && nums[j] <= nums[s]) tmp.push_back(nums[j++]);
        }
        while (s < mid + 1) {
            tmp.push_back(nums[s++]);
        }
        while (j <= e) {
            tmp.push_back(nums[j++]);
        }
        for (int i=k;i<e+1;i++) {
            nums[i] = tmp[i - k];
        }
        return count;
    }
};
