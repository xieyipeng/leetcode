#include <vector>
#include <iostream>

#include <map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		// 一遍哈希表
		map<int, int> a;
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(target - nums[i]) > 0)
			{
				return { i, a[target - nums[i]] };
			}
			a[nums[i]] = i;
		}
		return { 0,0 };
	}
};

int main() {
	Solution temp;
	vector<int> nums;
	vector<int> res;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	int target = 9;
	res = temp.twoSum(nums, target);
	for (vector<int>::iterator j = res.begin(); j != res.end(); j++) {
		cout << (*j) << endl;
	}
}



/*
 * 暴力法：
	vector<int> twoSum(vector<int>& nums, int target) {

		int i, j;

		// i从0开始，j从i+1开始
		// i最多等于 nums.size() - 1
		for (i = 0; i < nums.size() - 1; i++) {
			for (j = i + 1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					return { i,j };
				}
			}
		}

		return { i,j };
	}

 */


/*
 * 两遍哈希表
vector<int> twoSum(vector<int>& nums, int target) {
		int p = 0;
		int q = 0;
		map<int, int> a;
		for (int i = 0; i < nums.size(); i++)
		{
			a.insert(map<int, int>::value_type(nums[i], i));
		}

		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(target - nums[i]) > 0 && a[target - nums[i]] != i)
			{
				p = i;
				q = a[target - nums[i]];
				return { p,q };
			}
		}
		return { p,q };
	}
 */