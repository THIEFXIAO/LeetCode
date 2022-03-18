// 2044. 统计按位或能得到最大值的子集数目
/*

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int>nums{ 3,1 };

    int n = 1 << nums.size(), cnt = 0, maxscore = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if ((i >> j) & 1)
            {
                temp |= nums[j];
            }
        }
        if (temp == maxscore)
        {
            cnt++;
        }
        if (temp > maxscore)
        {
            cnt = 1;
            maxscore = temp;
        }
    }
    return cnt;

    system("pause");
    return 0;
}
*/