// ��ָ Offer II 003. ǰ n �����ֶ�������1�ĸ���
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n = 10;

	vector<int>answer(n + 1);
	int highbit = 0;
	answer[0] = 0;
	for (int i = 1; i < n + 1; i++)
	{

		if (!(i & (i - 1)))
		{
			highbit = i;
		}
		answer[i] = answer[i - highbit] + 1;
	}
	cout << answer[0] << endl;

	return 0;
	system("pause");
}
*/