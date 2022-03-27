// 2028. 找出缺失的观测数据

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> rolls{ 1,5,6 };
	int mean = 3, n = 4;

	vector<int>lostdata;
	int datasum = (rolls.size() + n) * mean;
	for (size_t i = 0; i < rolls.size(); i++)
	{
		datasum -= rolls[i];
	}
	if (datasum < n || datasum > 6 * n)
	{
		cout << "data wrong" << endl;
	}
	while (datasum != 0)
	{
		if (datasum % n != 0)
		{
			lostdata.push_back(datasum / n + 1);
			datasum -= datasum / n + 1;
			n--;
		}
		else
		{
			lostdata.push_back(datasum / n);
			datasum -= datasum / n;
			n--;
		}
	}

	cout << lostdata[0] << endl;


	return 0;
	system("pause");
}

/*这题递归是真的难，我是傻逼*/
/*
void finddata(vector<int>& lostdata, int datasum, int n) {
	
	for (int i = 6; i > 0; i--)
	{
		if (datasum - i > 6 * (n - 1))
		{
			lostdata.push_back(i); n--;
			finddata(lostdata, datasum - i, n);
		}
		if ((datasum - i) > 0) 
		{
			if (n == 2)
			{
				lostdata.push_back(i);
				lostdata.push_back(datasum - i);
				return;
			}
		}
		if ((datasum - i) == 0)
		{
			if (n == 1)
			{
				lostdata.push_back(i);
				return;
			}
			
		}
		if ((datasum - i) < 0)
		{
			lostdata.pop_back();
			finddata(lostdata, datasum, n);
		}
	}
	
}

int main() {

	vector<int> rolls{ 1,2,3,4 };
	int mean = 3, n = 100;

	vector<int>lostdata;
	int datasum = (rolls.size() + n) * mean;
	for (size_t i = 0; i < rolls.size(); i++)
	{
		datasum -= rolls[i];
	}
	if (datasum < n || datasum > 6 * n)
	{
		cout << "data wrong" << endl;
	}
	finddata(lostdata, datasum, n);

	return 0;
	system("pause");
}
*/