// 440. �ֵ���ĵ�KС����

/*
#include <iostream>
#include <vector>

using namespace std;

int GetNodeNums(int Node, long n) {
    
    int layer = 0;
    long first = Node;
    long last = Node + 1;
    // ÿ��ڵ�������ۼ�
    // [first, last + 1)
    // [1, 2)        [2, 3)
    // [10, 20)      [20, 30)
    // [100, 200)    [200, 300)
    // [1000, 2000)  [2000, 3000)
    while (first <= n)
    {
        // ����������ʱ�����һ����n + 1���ڵ�
        // [first, n + 1) eg.��n = 11ʱ���ò�Ϊ[10, 11 + 1)
        layer += min(last, n + 1) - first;
        first *= 10;
        last *= 10;
    }
    return layer;
}

int main() {

    int k = 3, n = 10;

    int node = 1;
    k--;
    while (k > 0)
    {
        int num = GetNodeNums(node, n);
        // ��k = numʱ����ʾ����һ������ڵ����
        // eg. n[1, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9];
        // k = 4ʱ��������Ҫ�ҵ���Ϊ n[3]=11
        // �ڵ�1��������n[0] = 1;n[1] = 10;n[2] = 11;
        // �ڵ�2 n[3] = 2;����������Ҫ�ҵ�����
        if (num <= k)
        {
            k -= num;
            node++;
        }
        else
        {
            node *= 10;
            k--;
        }
    }
    cout << node << endl;
	
	return 0;
	system("pause");
}
*/