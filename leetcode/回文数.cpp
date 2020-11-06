#include <vector>
#include <iostream>
#include <string>

// 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		// 所有最后一位是0的数，都不是回文数

		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		// 只转一半

		int new_num = 0;

		while (1)
		{
			new_num = new_num * 10 + x % 10;
			x /= 10;

			// 注意个位数的处理：x / 10 == new_num
			if (x == new_num || x == new_num / 10) {
				return true;
			}

			// 可以提到while循环条件内
			if (x <= new_num) {
				break;
			}
		}
		return false;
	}
};


int main() {
	Solution temp;
	std::cout << temp.isPalindrome(12321) << std::endl;
	return 0;
}


/*
 * 数字转字符串，逐个字符比较
		if (x < 0) {
			return false;
		}

		string temp = std::to_string(x);

		string rev_temp = "";

		for (int i = temp.length() - 1; i >= 0; i--) {
			rev_temp += temp[i];
		}

		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] != rev_temp[i])
			{
				return false;
			}
		}
		return true;
 */