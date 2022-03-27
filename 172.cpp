// 172. 阶乘后的零

/*
#include<iostream>

using namespace std;

int main() {

	int n = 15;

	int zeronum = 0;
	//while (n % 5 == 0) 不可行，例如n = 8,时不会进入到循环
	while (n > 4)
	{
		zeronum += n / 5;
		// 相当于所有数字都除以5，把这些5累加起来，最后所有数字都小于五跳出
		n /= 5;
	}
	
	cout << zeronum << endl;

	return 0;
}
*/