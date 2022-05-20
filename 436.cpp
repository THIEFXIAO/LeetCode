// 436. я╟урсргЬ╪Д

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {

        vector<pair<int, int>> list(intervals.size());
        for (int i = 0; i < intervals.size(); i++)
        {
            list[i].first = intervals[i][0];
            list[i].second = i;
        }
        sort(list.begin(), list.end());
        vector<int> ans(intervals.size());
        for (int i = 0; i < intervals.size(); i++)
        {
            int l = 0, r = list.size() - 1, mid = 0;
            while (l < r)
            {
                mid = l + ((r - l) >> 1);
                if (list[mid].first < intervals[i][1]) l = mid + 1;
                else r = mid;
            }
            if (list[l].first < intervals[i][1]) ans[i] = -1;
            else  ans[i] = list[l].second;
        }
        return ans;
    }
};

int main() {

    vector<vector<int>>intervals{ {1, 12}, {2, 9}, {3, 10}, {13, 14}, {15, 16}, {16, 17} };
    Solution ans;
    ans.findRightInterval(intervals);

	return 0;
}
*/