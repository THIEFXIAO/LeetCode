// 2049. 统计最高分的节点数目   

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {

    class Solution {
    public:

        int cnt = 0;
        long  maxscore = 0;
        vector<vector<int>>children;
        int dfs(int node) {
            int sum = 1;
            long score = 1;
            for (int root : children[node]) {
                int n = dfs(root);
                score *= n;
                sum += n;
            }
            if (node != 0) {
                score *= (children.size() - sum);
            }
            if (maxscore == score) cnt++;
            if (score > maxscore) {
                maxscore = score;
                cnt = 1;
            }
            return sum;
        }

        int countHighestScoreNodes(vector<int>& parents) {

            children = vector<vector<int>>(parents.size());
            for (int i = 0; i < parents.size(); i++) {
                if (parents[i] != -1)
                    children[parents[i]].push_back(i);
            }
            dfs(0);
            return cnt;
        }
    };

    system("pause");
    return 0;
}
*/