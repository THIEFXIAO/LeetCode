// 693. ����λ��������

// ��������ȭ������==�����ȼ���Ȼ��&ǰ�棬����

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