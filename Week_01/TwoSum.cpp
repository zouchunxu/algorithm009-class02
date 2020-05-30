#include <map>
#include <vector>

class Solution {
public:
	vector<int> twoSum(vector<int> &nums, int target) {
		map<int,int> m;
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			int tmp = target - nums[i];
			if (m.count(tmp)) {
				result.push_back(m[tmp]);
				result.push_back(i);
				return result;
			}
			m.insert(pair<int,int>(nums[i],i));
		}
		return result;
	}
};
