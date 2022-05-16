// 面试题 04.06. 后继者

/*
#include<iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* ans = nullptr, * curr = root;
        while (curr != nullptr)
        {
            if (curr->val > p->val)
            {
                ans = curr;
                curr = curr->left;
            }
            else curr = curr->right;
        }
        return ans;
    }
};

int main() {

    Solution ans;
    TreeNode* root = new TreeNode(5);
    TreeNode* l1 = new TreeNode(3);
    TreeNode* l2 = new TreeNode(2);
    TreeNode* l3 = new TreeNode(1);
    TreeNode* r1 = new TreeNode(4);
    TreeNode* r2 = new TreeNode(6);
    root->left = l1; root->right = r2;
    l1->left = l2; l1->right = r1;
    l2->left = l3;
    TreeNode* t = nullptr;
    t = ans.inorderSuccessor(root, r1);
	return 0;
}
*/