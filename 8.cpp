// 8. 字符串转换整数 (atoi)

// 我的酒吧炸了不知道多少次了，边界条件是真的难考虑

/*
#include<iostream>
#include<string>
#include<vector>

int main() {

	std::string s = "2147483646";
	// std::string s = "21474836460";
	// std::string s = "+1";
	// std::string s = "+-1";
	// std::string s = "+0 12";

	int ans = 0;
	int flag = 0, start = 0;
	for (size_t i = 0; i < s.size() + 1; i++)
	{
		if (flag == 0 && s[i] == ' ')
		{
			start++;
			continue;
		}
		if (i == start && s[i] == '+')
		{
			flag = 1;
			continue;
		}
		if (i == start && s[i] == '-')
		{
			flag = -1;
			continue;
		}
		if (((int)s[i] - 48 < 10) && ((int)s[i] - 47 > 0))
		{
			if (flag == 0) flag = 1;
			if (ans <= (2147483647 - ((int)s[i] - 48)) / 10)
			{
				ans = ans * 10 + ((int)s[i] - 48);
				if (i < s.size() - 1) continue;
				return flag == 1 ? ans : -ans;
			}
			else
			{
				return flag == 1 ? 2147483647 : -2147483648;
			}
		}
		else
		{
			return flag == 1 ? ans : -ans;
		}
		break;
	}

	return 0;
}
*/