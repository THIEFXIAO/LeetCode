// 386. �ֵ�������

/*
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans(n);
        int number = 1;
        for (size_t i = 0; i < n; i++)
        {
            ans[i] = number;
            if (number * 10 <= n) number *= 10;
            else
            {
                // �ж�Ҷ�ӽڵ��Ƿ������꣬�����˻��ˣ�ֱ���˵�û���������
                while (number % 10 == 9 || number + 1 > n) number /= 10;
                number++;
            }
        }
        return ans;
    }
};

int main() {

    int n = 10;
    Solution ans;
    ans.lexicalOrder(n);

	return 0;
}
*/