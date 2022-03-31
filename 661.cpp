// 661.Í¼Æ¬Æ½»¬Æ÷(3*3¾ùÖµÂË²¨)

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<vector<int>>img = { {1} };

	vector<vector<int>>blurimg(img.size(), vector<int>(img[0].size()));
	for (size_t row = 0; row < img.size(); row++)
	{
		for (size_t col = 0; col < img[0].size(); col++)
		{
			int num = 0, sum = 0;
			for (size_t x : { row - 1, row, row + 1})
			{
				for (size_t y : { col - 1, col, col + 1})
				{
					if (x < img.size() && y < img[0].size())
					{
						num++;
						sum += img[x][y];
					}
				}
			}
			blurimg[row][col] = sum / num;
		}
	}

	return 0;
}
*/