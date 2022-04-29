// 427. 建立四叉树

// 有二维前缀和的解法，参考304题

/*
#include<iostream>
#include<vector>

using namespace std;

// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

class Solution {
private:
    Node* dfs(vector<vector<int>>& grid, int col, int row, int n) {

        int val = grid[col][row];
        for (size_t i = col; i < col + n; i++)
        {
            for (size_t j = row; j < row + n; j++)
            {
                // 由于函数会被放在栈区，所以调试的时能够发现
                // 计算顺序为，bottomRight->bottomLeft->topRight->topLeft
                if (val != grid[i][j])
                {
                    return new Node(true, false,
                        dfs(grid, col, row, n / 2),
                        dfs(grid, col, row + n / 2, n / 2),
                        dfs(grid, col + n / 2, row, n / 2),
                        dfs(grid, col + n / 2, row + n / 2, n / 2));
                }
            }
        }
        return new Node(val, true);
    }

public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return dfs(grid, 0, 4, 4);
    }
};

int main() {

    Solution ans;
    vector<vector<int>> grid{ {1, 1, 1, 1, 0, 0, 0, 0}, 
                              {1, 1, 1, 1, 0, 0, 0, 0}, 
                              {1, 1, 1, 1, 1, 1, 1, 1}, 
                              {1, 1, 1, 1, 1, 1, 1, 1}, 
                              {1, 1, 1, 1, 0, 0, 0, 0}, 
                              {1, 1, 1, 1, 0, 0, 0, 0}, 
                              {1, 1, 1, 1, 0, 0, 0, 0}, 
                              {1, 1, 1, 1, 0, 0, 0, 0} };
    Node* a;
    a = ans.construct(grid);
    
    return 0;
}
*/