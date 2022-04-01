// 954. 二倍数对数组

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

int main() {

	std::vector<int>arr{ 4,2,2,4 ,4,2 };

	std::unordered_map<int, int>cnt;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cnt[arr[i]]++;
	}
	if (cnt[0] & 1) return 0;
	std::vector<int>sortarr;
	sortarr.reserve(cnt.size());
	for (auto& [num,x] : cnt)sortarr.emplace_back(num);
	for (size_t i = 0; i < sortarr.size(); i++)
	{
		sortarr[i] = cnt[i];
	}

	return 0;
}