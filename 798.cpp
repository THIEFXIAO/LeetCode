// 798. 得分最高的最小轮调
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums{ 2,3,1,4,0 };

    const int n = nums.size();
    vector<int>Count(n);//记录每个满足条件的数出现次数
    int score = 0;
    for (int i = 0; i < n; i++) //获取初始时的分数
    {
        if (i >= nums[i])
        {
            score++;
            Count[i - nums[i]]++;
        }
    }
    // 只关心首个元素移动到末尾时候的状态
    // 由于每个元素都是减一，然后首个元素转到末尾再加一
    int k = 0, temp = score;
    for (int i = 0; i < n; i++)//当i=0时，其实已经开始进行第一次轮调
    {
        int diff = i - nums[i];
        //当首元素移动到末尾时条件满足分数加一
        if ((diff < i) && (diff + n >= i))
        {
            score++;
        }
        //移动后元素变化的值还在[0,n]之间，需要记录次数
        if (diff < 0)
        {
            Count[diff + n]++;
        }
        //移动后元素的值已经大于n，需要减去原先位置的次数
        if (diff >= 0)
        {
            Count[diff]--;
        }
        //减去每次轮调出现的值，即为本此轮调的分数
        score = score - Count[i];
        if (score > temp)
        {
            temp = score;
            k = i + 1;
        }
    }
    return k;

    system("pause");
    return 0;
}
*/