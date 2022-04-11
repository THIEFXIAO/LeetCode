// 357. 统计各位数字都不同的数字个数


/*
#include<iostream>

using namespace std;

int countNumbersWithUniqueDigits(int n) {
	
	int ans = 1, sum = 9, base = 9;
	for (size_t i = 1; i <= n; i++)
	{
		ans +=  sum;
		sum *= base--;
	}
	return ans;
	
	//int dp[9] = { 0 };
	//dp[0] = 1; dp[1] = 10;
	//for (size_t i = 2; i <= n; i++)
	//{
	//	// 优化一下
	//	// int nums = 9;
	//	// for (int j = 9; j > (10 - i); j--) nums *= j;
	//	dp[i] = dp[i - 1] + (dp[i - 1] - dp[i - 2]) * (11 - i);
	//}
	//return dp[n];
	
}

int main() {

	int n = 8;

	int ans = countNumbersWithUniqueDigits(n);

	return 0;
}
*/