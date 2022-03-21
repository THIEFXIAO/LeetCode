// 653. 两数之和 IV - 输入 BST

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	
};

unordered_set<int> PreorderTree;

bool findTarget(TreeNode* root, int k) {
	
	if (root == nullptr) return false;
	PreorderTree.insert(root->val);
	if (PreorderTree.count(k - root->val))
	{
		return true;
	}
	return findTarget(root->left, k)|| findTarget(root->right, k);
}

int main() {



	return 0;
	system("pause");
}