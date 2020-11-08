#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>


// 编写一个函数来查找字符串数组中的最长公共前缀。
// 如果不存在公共前缀，返回空字符串 ""。

using namespace std;


class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		string res = "";

		if (strs.empty())
		{
			return res;
		}

		int min = INT_MAX;

		for (size_t i = 0; i < strs.size(); i++)
		{
			if (min > strs[i].length())
			{
				min = strs[i].length();
			}
		}

		for (int i = 0; i < min; i++)
		{
			string temp = strs[0].substr(i, 1);

			for (size_t j = 0; j < strs.size(); j++)
			{
				if (strs[j].substr(i, 1) != temp)
				{
					return res;
				}
			}
			res += temp;
		}
		return res;
	}
};

int main() {
	vector<string> vt_str;

	vt_str.push_back("flower");
	vt_str.push_back("flower");
	vt_str.push_back("flower");
	vt_str.push_back("flower");
	vt_str.push_back("flower");

	Solution temp;
	std::cout << "res: " << temp.longestCommonPrefix(vt_str) << std::endl;
	return 0;
}
