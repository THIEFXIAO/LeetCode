// 396. Ðý×ªº¯Êý

/*
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size(), sum = 0, f = 0;
        for (size_t i = 0; i < n; i++)
        {
            sum += nums[i];
            f += i * nums[i];
        }
        int max = f;
        for (size_t i = 1; i < n; i++)
        {
            f = f + sum - nums[n - i] * n;
            if (f > max) max = f;
        }
        return max;
    }
};

int main() {

    vector<int>nums{ 1,2,3,4,5,6,7,8,9,10 };
    Solution ans;
    cout << ans.maxRotateFunction(nums) << endl;

    return 0;
}
*/