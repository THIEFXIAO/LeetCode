// 398. ���������


#include<iostream>
#include<vector>

using namespace std;

class Solution {
    // vector<int>InputArray;
    vector<int>::iterator begin;
    vector<int>::iterator end;
public:
    Solution(vector<int>& nums) {
        begin = nums.begin();
        end = nums.end();
    }

    // Solution(vector<int>& nums) :InputArray(nums) {};
    // ������д���ǵȼ۵�
    // Solution(vector<int>& nums){
    //     InputArray = nums;
    // }

    int pick(int target) {
        int ans = 0, cnt = 0, pos = 0;
        for (vector<int>::iterator i = begin; i != end; pos++, i++)
        {
            if (*i == target)
            {
                cnt++;
                // �鵽���һ�����ͻ���û�鵽�Ͳ���
                if ((rand() % cnt) == 0) ans = pos;
            }
        }
        return ans;
    }
};

int main() {

    vector<int>nums{ 1,3,3,2,4,2 };
    Solution *a=new Solution(nums);
    cout << a->pick(4) << endl;
    Solution b(nums);
    cout << b.pick(4) << endl;

    return 0;
}
