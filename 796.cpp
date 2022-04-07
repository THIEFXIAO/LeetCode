// 796. 旋转字符串

/*
#include<iostream>
#include<string>

void main() {

	std::string s = "abcde", goal = "deabc";

	if (s.size() != goal.size()) return;
	std::string ans = s + s;
	int n = goal.size();
	unsigned int abc = ans.find(goal);
	// 可以直接调用find
	// ans.find(goal); 
	// string::find 返回值为size_t 记录的第一次出现的下标
	// 找不到返回std::string::npos (static const size_t npos = -1)
	// 所以if(string::find())永远都是true;
	// 额外tips: if(-1)在C++是true;
	
	if (ans.find(goal) != std::string::npos)
	{
		std::cout << "true" << std::endl;
	}

	//for (size_t i = 0; i < n; i++)
	//{
	//	std::string a = ans.substr(i, n);
	//	if (a == goal) return;
	//}
	std::cout << "false" << std::endl;
	
}
*/