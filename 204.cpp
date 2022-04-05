// 204. 计数质数

/*
#include<iostream>
#include<vector>


int main() {

	int n = 5000000;

	int PrimesNum = 0;
	std::vector<int> boollean(n, 1);
	// for (size_t i = 0; i < n; i++) boollean[i] = true;
	for (size_t i = 2; i * i < n; i++)
	{
		if (boollean[i])
		{
			if (boollean[i]) {
				PrimesNum++;
				for (size_t j = i * i; j < n; j += i)
				{
					boollean[j] = 0;
				}
			}
		}
	}

	return 0;
}
*/