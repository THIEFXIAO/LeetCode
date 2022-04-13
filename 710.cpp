// 710. 黑名单中的随机数

/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

// 二分法思路
class Solution
{
public:
	Solution(int n, vector<int>& blacklist) {
		AllNums = n;
		BlackList = blacklist;
		sort(BlackList.begin(), BlackList.end());
	}

	int pick() {
		
		int k = rand() % (AllNums - BlackList.size());
		if (BlackList.size() == 0) return k;
		int l = 0, r = BlackList.size() - 1;
		while (l < r)
		{
			int mid = (l + r + 1) / 2;
			if (BlackList[mid] - mid > k)r = mid - 1;
			else l = mid;
		}
		if (BlackList[l] - l <= k) return l + k + 1;
		return k;
	}

private:
	int AllNums;
	vector<int>BlackList;
};

int main() {

	int n = 1;
	vector<int>blacklist(0);
	Solution solution(n, blacklist);
	solution.pick();

	return 0;
}
*/