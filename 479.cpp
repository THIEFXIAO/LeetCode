// 479. 最大回文数乘积

/*
#include<iostream>
#include<math.h>

using namespace std;

int largestPalindrome(int n) {
    if (n == 1) return 9;
    int left = pow(10, n) - 1;
    for (int i = left; ; i--)
    {
        // 注意，在leetcode中long是64bit
        // 但是在VS中long其实等价于int表示32bit
        // cout << LONG_MAX << endl;
        // cout << INT_MAX << endl;
        long long num = i;
        for (size_t j = num; j > 0; j/=10)
        {
            num = num * 10 + j % 10;
        }
        for (long long j = left; j * j >= num; j--)
        {
            if (num % j == 0) 
                return num % 1337;
        }
    }

}

int main() {

    int n = 8;
    cout << largestPalindrome(n) << endl;

    return 0;
}
*/