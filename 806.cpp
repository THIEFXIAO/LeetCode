// 806. 写字符串需要的行数
/*
#include<string>
#include<iostream>
#include<vector>

using namespace std;

vector<int> numberOfLines(vector<int>& widths, string s) {

	vector<int>ans(2);
	ans[0] = 1;
	for (size_t i = 0; i < s.size(); i++)
	{
		ans[1] += widths[(s[i] - 97)];
		if (ans[1] > 100)
		{
			ans[0]++;
			ans[1] = widths[(s[i] - 97)];
		}
	}
	return ans;
}

int main() {
	vector<int>widths = { 4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 
		10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	string	S = "bbbcccdddaaa";
	vector<int>ans = numberOfLines(widths, S);
	return 0;
}
*/