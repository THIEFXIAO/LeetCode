// 754. �����յ�����


/*
#include<iostream>

using namespace std;

int sumstep(int n) {
	if (n > 46340) return INT32_MAX;
	return (1 + n) * n / 2;// ����д��(1 + n) * n / 2��(1 + n ) / 2 * n���о�����ʧ���ɽ���
}

int reachNumber(int target) {
	target = abs(target);
	int left = 1, right = target, mid = (target + 1) / 2;
	while (left < right)
	{
		if (sumstep(mid) < target)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else
		{
			right = mid;
			mid = (left + right) / 2;
		}
	}
	if (sumstep(mid)== target) return mid;
	if (((sumstep(mid) - target) & 1) == 1) mid++;
	if (((sumstep(mid) - target) & 1) == 1) mid++;
	return mid;
}

int main() {

	int target = -1000000000;

	int ans = reachNumber(target);

	return 0;
}
*/