// 728. 自除数

/*
#include<iostream>
#include<vector>
#include<string>

int main() {

	int left = 10, right = 22;

	std::vector<int>SelfDividingNumbers;

	//除10取余方式
	for (size_t i = left; i <= right; i++) 
	{
		bool flag = true;
		int number = i;
		while (number != 0)
		{
			int divider = number % 10;
			if (divider == 0 || i % divider != 0)
			{
				flag = false;
				break;
			}
			number /= 10;
		}
		if (flag)
		{
			SelfDividingNumbers.push_back(i);
		}
	}



	//转字符串方法，运行时间太长
	//for (size_t i = left; i <= right; i++)
	//{
	//	bool flag = true;
	//	std::string number = std::to_string(i);
	//	for (size_t j = 0; j < number.size(); j++)
	//	{
	//		if ((int)number[j] - 48 == 0 || (i % ((int)number[j] - 48) != 0))
	//		{
	//			flag = false;
	//			break;
	//		}
	//	}
	//	if (flag)
	//	{
	//		SelfDividingNumbers.push_back(i);
	//	}
	//}

	return 0;
}
*/