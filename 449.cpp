// 449. 序列化和反序列化二叉搜索树

/*
#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {

    void dfs(TreeNode* root, string& s)
    {
        if (root == nullptr) return;
        s += to_string(root->val) + ",";
        if (root->left) dfs(root->left, s);
        if (root->right) dfs(root->right, s);
    }

    TreeNode* BuildTree(int min, int max, queue<int>& pre)
    {
        if (pre.size() == 0 || pre.front() < min || pre.front() > max)return nullptr;
        int val = pre.front();
        pre.pop();
        TreeNode* root = new TreeNode(val);
        root->left = BuildTree(min, val, pre);
        root->right = BuildTree(val, max, pre);
        return root;
    }

public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr) return "";
        string s = "";
        dfs(root, s);
        s.pop_back();
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<int> pre;
        // int可能大于10
        for (size_t i = 0; i < data.length(); i++)
        {
            string num = "";
            while (i < data.length() && data[i] != ',')
            {
                num += data[i];
                i++;
            }
            pre.push(stoi(num));
        }
        
        return BuildTree(INT32_MIN, INT32_MAX, pre);
    }
};


int main() {

    TreeNode* root = new TreeNode(2);
    TreeNode* l = new TreeNode(1);
    TreeNode* r = new TreeNode(3);
    root->left = l;
    root->right = r;

    Codec ans;
    string data = ans.serialize(root);
    cout << data << endl;
    ans.deserialize(data);

	return 0;
}
*/