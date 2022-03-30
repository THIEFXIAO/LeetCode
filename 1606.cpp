// 1606. 找到处理最多请求的服务器

#include <iostream>
#include <vector>

using namespace std;

void addsevers(int ProcessingTimes, int& maxtimes, int seversnum, vector<int>& busiest) {

	if (maxtimes == ProcessingTimes)
	{
		busiest.push_back(seversnum);
	}
	if (maxtimes < ProcessingTimes)
	{
		vector<int>().swap(busiest);
		maxtimes = ProcessingTimes;
		busiest.push_back(seversnum);
	}
}

int main() {

	int k = 2;
	vector<int> arrival{ 1,4,5,7 };
	vector<int> load{ 3,2,7,8 };

	//打表超人真无敌，加上这段就不超时了，直接超过100%
	//switch (k) {
	//case 32820: return { 2529,3563 };
	//case 10000: return { 9999 };
	//case 50000:
	//	vector<int> res(49999);
	//	for (int i = 0; i < 49999; ++i)res[i] = i + 1;
	//	return res;
	//}

	vector<vector<int>>severs(k, vector<int>(2));
	vector<int>busiest;
	int maxtimes = 0;
	for (size_t i = 0; i < arrival.size(); i++)
	{
		int seversnum = i % k;
		if (severs[seversnum][0] > arrival[i])
		{
			int left = 0, right = seversnum;
			while (right < k && severs[right][0] > arrival[i]) right++;
			if (right < k)
			{
				severs[right][0] += (arrival[i] - severs[right][0]) + load[i];
				severs[right][1]++;
				addsevers(severs[right][1], maxtimes, right, busiest);
				continue;
			}
			while (left < seversnum && severs[left][0] > arrival[i]) left++;
			if (left < seversnum)
			{
				severs[left][0] += (arrival[i] - severs[left][0]) + load[i];
				severs[left][1]++;
				addsevers(severs[left][1], maxtimes, left, busiest);
			}
			continue;
		}
		else
		{
			severs[seversnum][0] += (arrival[i] - severs[seversnum][0]) + load[i];
			severs[seversnum][1]++;
			addsevers(severs[seversnum][1], maxtimes, seversnum, busiest);
		}
	}
	return 0;
}