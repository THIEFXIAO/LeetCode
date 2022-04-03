// 744. 寻找比目标字母大的最小字母

/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main() {

	char target = 'j';
	std::vector<char>letters{ 'c','f','j' };

	// 没注意到题目给的有序数组，可以用二分更快
	//int targetright = 27, targetleft = 0;
	//for (size_t i = 0; i < letters.size(); i++)
	//{
	//	if ((letters[i] - target > 0) && (letters[i] - target < targetright))
	//	{
	//		targetright = letters[i] - target;
	//	}
	//	if ((letters[i] - target < 0) && (letters[i] - target < targetleft))
	//	{
	//		targetleft = letters[i] - target;
	//	}
	//}
	//std::cout << (targetright == 28 ? (char)(target + targetleft) : (char)(target + targetright)) << std::endl;

	int left = 0, right = letters.size() - 1;

	while (left < right)
	{
		int mid = (right + left) / 2;
		if (letters[mid] >= target) right = mid;
		else left = mid + 1;
	}
	std::cout << (letters[right] > target ? letters[right] : letters[0]) << std::endl;

	return 0;
}
*/