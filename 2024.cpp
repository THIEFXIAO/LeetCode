// 2024. ���Ե�������Ŷ�

// ���˹ٽ�Ҳ��˫ָ�룬������ά������T��F������������ÿ�������жϼ򵥶���

#include <iostream>
#include <string>

using namespace std;

int MaxContinue(string answerKey,int k ,char character) {

	char* first = &answerKey[0], * last = &answerKey[0];
	int number = 0, maxnum = 0, another = 0;
	while (k > 0 && (*last != '\0'))
	{
		if (*last != character) k--;
		last++;
		number++;
	}
	maxnum = number;
	while (*last != '\0')
	{
		while (another > 0)
		{
			if (*first != character) another--;
			if (*first == character) number--;
			first++;
		}
		if ((*last == character) && (another <= 0))
		{
			number++;
		}
		else
		{
			if (*last != character)
			{
				another++;
				if (*first == character) number--;
				if (*first != character) another--;
			}
			first++;
		}
		last++;
		if (number > maxnum) 
			maxnum = number;
	}
	return maxnum;
}

int main() {

	//string answerKey = "FTFFTFTFTTFTTFTTFFTTFFTTTTTFTTTFTFFTTFFFFFTTTTFTTTTTTTTTFTTFFTTFTFFTTTFFFFFTTTFFTT";
	string answerKey = "FTFFTFTFTTFTTFTTFFTTFFTTTTTFTTTFTFFTTFFFFFTTTTFTTTTTTTTTFTTFFTTFTFFTTTFFFFFTTTFFTTTTFTFTFFTTFTTTTTTF";
	int k = 32;

	int	T = 0, F = 0;
	T = MaxContinue(answerKey, k, 'T');
	F = MaxContinue(answerKey, k, 'F');
	cout << (T > F ? T : F) << endl;

	return 0;
}