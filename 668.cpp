// 668. 乘法表中第k小的数


/*
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int l = 1, r = m * n;
        while (l < r)
        {
            int mid = l + (r - l >> 1);
            int num = 0;
            for (int i = 1; i <= m; i++)
            {
                num += min(mid / i, n);
            }
            if (num < k) l = mid + 1;
            else r = mid;
        }
        return l;
    }
};

int main() {

    // int m = 9895, n = 28405, k = 100787757;
    int m = 3, n = 3, k = 5;
    // int m = 45, n = 12, k = 471; // 19应该只有一个，因为只存在19 * 1一种情况
    Solution ans;
    cout << ans.findKthNumber(m, n, k);

	return 0;
}

*/