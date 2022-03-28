// 693. 交替位二进制数

// 简单题我重拳出击，==的优先级居然在&前面，绝了

#include <iostream>

using namespace std;

int main() {

	int n = 8;

	bool endnum = n & 1;
	n = n >> 1;
	while (n != 0)
	{
		if ((n & 1) == endnum)
		{
			return false;
		}
		endnum = !endnum;
		n = n >> 1;
	}
	return true;
	
	return 0;
}