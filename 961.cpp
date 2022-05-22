// 961. 在长度 2N 的数组中找出重复 N 次的元素

/*
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int res = nums[0], curr = nums[0], count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (res == nums[i]) return res;
            if (curr == nums[i]) count++;
            else if (--count <= 0) 
            {
                curr = nums[i];
                count = 1;
            }
        }
        return curr;
    }
};

int main() {

    vector<int> nums{ 5,1,5,2,5,3,5,4 };
    // vector<int> nums{ 8,3,2,3 };
    Solution ans;
    ans.repeatedNTimes(nums);
    return 0;
}
*/