#include <vector>
#include <iostream>

// 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

using namespace std;

class Solution {
public:
	int reverse(int x) {
		// 与字符串反转方法类似
		int res = 0;
		while (x != 0)
		{
			int remainder = x % 10;
			x /= 10;
			
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && remainder > 7)) 
			{
				return 0;
			}

			//964 632 435

			if (res < INT_MIN / 10 || (res == INT_MIN / 10 && remainder < -8))
			{
				return 0;
			}
			res = res * 10 + remainder;
		}
		return res;
	}
};


int main() {
	Solution temp;
	std::cout << temp.reverse(-45123) << std::endl;
}

/*
		if (x > 2147483647) {
			return 0;
		}

		if (x <= -2147483648) {
			return 0;
		}


		vector<int> nums;
		int t = 0;
		bool positive_num = false;

		if (x > 0) {
			positive_num = true;
			t = x;
		}
		else
		{
			positive_num = false;
			t = -x;
		}

		while (t > 0) {
			nums.push_back(t % 10);
			t /= 10;
		}


		int res = 0;
		for (vector<int>::iterator j = nums.begin(); j != nums.end(); j++) {

			if (res > 214748364) {
				return 0;
			}

			res = res * 10 + (*j);
		}

		if (res > 2147483647)
		{
			return 0;
		}

		if (-res < -2147483648)
		{
			return 0;
		}


		if (positive_num)
		{
			return res;
		}
		else
		{
			return -res;
		}
 */