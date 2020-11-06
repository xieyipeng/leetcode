#include <vector>
#include <iostream>
#include <string>

// �ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		// �������һλ��0�����������ǻ�����

		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		// ֻתһ��

		int new_num = 0;

		while (1)
		{
			new_num = new_num * 10 + x % 10;
			x /= 10;

			// ע���λ���Ĵ���x / 10 == new_num
			if (x == new_num || x == new_num / 10) {
				return true;
			}

			// �����ᵽwhileѭ��������
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
 * ����ת�ַ���������ַ��Ƚ�
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