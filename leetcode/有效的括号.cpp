#include <iostream>
#include <string>

#include <stack>



using namespace std;

class Solution {
public:
	bool isValid(string s) {

		// 另一种方法：ASCII比较

		if (s.length() % 2 == 1)
		{
			return false;
		}

		stack<char> str_stack;

		for (char ch : s)
		{
			switch (ch)
			{
				case '(':
					str_stack.push(ch);
					break;
				case '[':
					str_stack.push(ch);
					break;
				case '{':
					str_stack.push(ch);
					break;
				case ')':
					if (str_stack.empty())
					{
						return false;
					}
					if (str_stack.top() == '(')
					{
						str_stack.pop();
					}
					else
					{
						return false;
					}
					break;
				case ']':
					if (str_stack.empty())
					{
						return false;
					}
					if (str_stack.top() == '[')
					{
						str_stack.pop();
					}
					else
					{
						return false;
					}
					break;
				case '}':
					if (str_stack.empty())
					{
						return false;
					}
					if (str_stack.top() == '{')
					{
						str_stack.pop();
					}
					else
					{
						return false;
					}
					break;
			default:
				break;
			}
		}
		if (str_stack.empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

//int main() {
//	Solution temp;
//	std::cout << "res: " << temp.isValid("}{") << std::endl;
//	return 0;
//}