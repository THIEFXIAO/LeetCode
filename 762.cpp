// 762. �����Ʊ�ʾ��������������λ������������1�ĸ����Ƿ�Ϊ����

/*
#include<iostream>
#include<vector>
#include<unordered_set>
#include<vector>

int main() {

	int left = 10, right = 15;

	//����hash���������;
	//std::unordered_set<int>PrimeNumber;
	//for (size_t i = 2; i < 32; i++)
	//{
	//	for (size_t j = 2; j <= i; j++)
	//	{
	//		if (i == j) PrimeNumber.insert(i);
	//		if (i % j == 0)break;
	//	}
	//}
	//int PrimeNumbers = 0;
	//for (size_t i = left; i <= right; i++)
	//{
	//	int Number = i, NumberOfOne = 0;
	//	while (Number > 0)
	//	{
	//		if (Number & 1) NumberOfOne++;
	//		Number >>= 1;
	//	}
	//	if (PrimeNumber.count(NumberOfOne)) PrimeNumbers++;
	//}
	//std::cout << PrimeNumbers << std::endl;

	int PrimeNumber[32] = { 0 };
	for (size_t i = 2; i < 32; i++)
	{
		for (size_t j = 2; j <= i; j++)
		{
			if (i == j) PrimeNumber[i] = 1;
			if (i % j == 0)break;
		}
	}

	int PrimeNumbers = 0;
	for (size_t i = left; i <= right; i++)
	{
		int Number = i, NumberOfOne = 0;
		while (Number > 0)
		{
			if (Number & 1) NumberOfOne++;
			Number >>= 1;
		}
		if (PrimeNumber[NumberOfOne]) PrimeNumbers++;
	}
	std::cout << PrimeNumbers << std::endl;

	return 0;
}
*/
