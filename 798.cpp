// 798. �÷���ߵ���С�ֵ�
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums{ 2,3,1,4,0 };

    const int n = nums.size();
    vector<int>Count(n);//��¼ÿ�����������������ִ���
    int score = 0;
    for (int i = 0; i < n; i++) //��ȡ��ʼʱ�ķ���
    {
        if (i >= nums[i])
        {
            score++;
            Count[i - nums[i]]++;
        }
    }
    // ֻ�����׸�Ԫ���ƶ���ĩβʱ���״̬
    // ����ÿ��Ԫ�ض��Ǽ�һ��Ȼ���׸�Ԫ��ת��ĩβ�ټ�һ
    int k = 0, temp = score;
    for (int i = 0; i < n; i++)//��i=0ʱ����ʵ�Ѿ���ʼ���е�һ���ֵ�
    {
        int diff = i - nums[i];
        //����Ԫ���ƶ���ĩβʱ�������������һ
        if ((diff < i) && (diff + n >= i))
        {
            score++;
        }
        //�ƶ���Ԫ�ر仯��ֵ����[0,n]֮�䣬��Ҫ��¼����
        if (diff < 0)
        {
            Count[diff + n]++;
        }
        //�ƶ���Ԫ�ص�ֵ�Ѿ�����n����Ҫ��ȥԭ��λ�õĴ���
        if (diff >= 0)
        {
            Count[diff]--;
        }
        //��ȥÿ���ֵ����ֵ�ֵ����Ϊ�����ֵ��ķ���
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