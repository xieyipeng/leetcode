#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>


// ����һ���������֣�����ת��������������ȷ���� 1 �� 3999 �ķ�Χ�ڡ�

using namespace std;


class Solution {
public:
	int romanToInt(string s) {
		// ���������ǻ�򵥺ܶ�
		unordered_map<string, int> base = { {"I", 1},{"V", 5},{"X", 10},{"L", 50},{"C", 100},{"D", 500},{"M", 1000} };

		int res = base[s.substr(s.length() - 1, 1)];

		for (int i = s.length()-2; i >= 0; i--)
		{
			string s1 = s.substr(i, 1);
			string s2 = s.substr(i + 1, 1);

			if (base[s2] > base[s1]) {
				res = res - base[s1];
			}
			else {
				res = res + base[s1];
			}
		}
		return res;
	}
};

int main() {
	Solution temp;
	std::cout << temp.romanToInt("MCMXCIV") << std::endl;
	return 0;
}
/*
 * �µ�map��
		unordered_map<char, int> base = { {'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000} };

		cout << base['V'] << endl;

		char p = 'n';
		int res = 0;

		// �ֶ�����

		for (int i = 0; i < s.length(); i++)
		{
			char now = s[i];
			if (p=='n')
			{
				res = res + base[now];
				p = s[i];
			}
			else
			{
				if (base[p]>=base[now])
				{
					res = res + base[now];

				}
				else
				{
					res = base[now] - res;

				}
			}
		}

		return res;
 */