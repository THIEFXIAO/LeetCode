// 429. N ²æÊ÷µÄ²ãÐò±éÀú

/*
#include<iostream>
#include<vector>
#include<queue>

// Definition for a Node.
class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


void main() {

    Node* root;

    if (!root) return;
    std::vector<std::vector<int>> ans;
    std::queue<Node*> que;
    que.push(root);
    while (!que.empty())
    {
        int n = que.size();
        std::vector<int>Level;
        for (size_t i = 0; i < n; i++)
        {
            Node* node = que.front();
            que.pop();
            Level.push_back(node->val);
            for (auto& child : node->children) que.push(child);
        }
        ans.push_back(Level);
    }

}
*/