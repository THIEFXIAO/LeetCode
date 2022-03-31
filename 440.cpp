// 440. 字典序的第K小数字

/*
#include <iostream>
#include <vector>

using namespace std;

int GetNodeNums(int Node, long n) {
    
    int layer = 0;
    long first = Node;
    long last = Node + 1;
    // 每层节点的数量累加
    // [first, last + 1)
    // [1, 2)        [2, 3)
    // [10, 20)      [20, 30)
    // [100, 200)    [200, 300)
    // [1000, 2000)  [2000, 3000)
    while (first <= n)
    {
        // 当非满树的时候，最后一层有n + 1个节点
        // [first, n + 1) eg.当n = 11时，该层为[10, 11 + 1)
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
        // 当k = num时，表示在下一个横向节点出现
        // eg. n[1, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9];
        // k = 4时，我们需要找的数为 n[3]=11
        // 节点1包含的有n[0] = 1;n[1] = 10;n[2] = 11;
        // 节点2 n[3] = 2;才是我们需要找的数字
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