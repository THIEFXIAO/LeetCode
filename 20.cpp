// 20. 有效的括号

/*
#include<iostream>
#include<string>
#include<stack>

int main() {

	std::string s = "(])";

	std::stack<char>brackets;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') brackets.push(s[i]);
		else if (!brackets.empty())
		{
			if (s[i] == ')' && brackets.top() == '(') brackets.pop();
			else if (s[i] == ']' && brackets.top() == '[') brackets.pop();
			else if (s[i] == '}' && brackets.top() == '{') brackets.pop();
			else return 0;
		}
		else return 0;//0表示flase，1表示true
	}
	if (brackets.empty()) return 1;
	return 0;
}
*/