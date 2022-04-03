// 954. 二倍数对数组

/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

int main() {

	std::vector<int>arr{ 2,4,0,0,8,1 };

	std::unordered_map<int, int>cnt;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cnt[arr[i]]++;
	}
	if (cnt[0] & 1) return 0;
	std::vector<int>sortarr;
	sortarr.reserve(cnt.size());
	
	for (auto& num : cnt) 
		sortarr.emplace_back(num.first);
	std::sort(sortarr.begin(), sortarr.end(), [](int a, int b) {
		return abs(a) < abs(b);
		});
	for (auto num : sortarr)
	{
		if (cnt[2 * num] < cnt[num]) return 0;
		cnt[2 * num] -= cnt[num];
	}
	return 1;

	return 0;
}
*/