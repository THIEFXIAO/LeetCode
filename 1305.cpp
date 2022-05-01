// 1305. ���ö����������е�����Ԫ��

/*
#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {

private:
    
    // ǰ��������ϲ������򣬶��������������Ч
    void PreorderTraversal(TreeNode* root, vector<int>& ans) {
        if (root == nullptr) return;
        int Current = root->val, pos = ans.size();
        ans.push_back(Current);
        while (pos > 0 && Current < ans[pos - 1])
        {
            ans[pos] = ans[pos - 1];
            pos--;
        }
        ans[pos] = Current;
        if (root->left) PreorderTraversal(root->left, ans);
        if (root->right) PreorderTraversal(root->right, ans);
    }

    // ������������������������ܵõ�������������

    void MiddleTraversal(TreeNode* root, vector<int>& nums) {
        if (root) 
        {
            if (root->left) MiddleTraversal(root->left, nums);
            nums.emplace_back(root->val);
            if (root->right) MiddleTraversal(root->right, nums);
        }
    }

public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        // PreorderTraversal(root1, ans);
        // PreorderTraversal(root2, ans);

        vector<int> nums1, nums2, ans;
        MiddleTraversal(root1, nums1);
        MiddleTraversal(root2, nums2);
        for (vector<int>::iterator i = nums1.begin(), j = nums2.begin(); i <= nums1.end() && j <= nums2.end(); )
        {
            if (i == nums1.end())
            {
                ans.insert(ans.end(), j, nums2.end());
                break;
            }
            if (j == nums2.end())
            {
                ans.insert(ans.end(), i, nums1.end());
                break;
            }
            if (*i < *j) ans.emplace_back(*i++);
            else ans.emplace_back(*j++);
        }

        return ans;
    }
};

int main() {



    return 0;
}
*/