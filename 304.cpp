// 304. 二维区域和检索 - 矩阵不可变

/*
#include<iostream>
#include<vector>

using namespace std;

class NumMatrix {

    vector<vector<int>>Sum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() > 0)
        {
            Sum.resize(matrix.size() + 1, vector<int>(matrix[0].size() + 1));
            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    Sum[i + 1][j + 1] =
                        Sum[i + 1][j] + Sum[i][j + 1] - Sum[i][j] + matrix[i][j];
                }
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return Sum[row2 + 1][col2 + 1] - Sum[row1][col2 + 1]
            - Sum[row2 + 1][col1] + Sum[row1][col1];
    }
};

int main() {

    vector<vector<int>>number{ {3, 0, 1, 4, 2},
                               {5, 6, 3, 2, 1},
                               {1, 2, 0, 1, 5},
                               {4, 1, 0, 1, 7},
                               {1, 0, 3, 0, 5} };

    NumMatrix ans(number);
    cout << ans.sumRegion(2, 1, 4, 3) << endl;
    cout << ans.sumRegion(1, 1, 2, 2) << endl;
    cout << ans.sumRegion(1, 2, 2, 4) << endl;

    return 0;
}
*/