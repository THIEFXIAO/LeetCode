// 310. 最小高度树

#include<iostream>
#include<vector>

int main() {

	std::vector<std::vector<int>> edges = {{3, 0}, {3, 1}, {3, 2}, {3, 4}, {5, 4}};
	int n = 6;

	std::vector<int> nodes(n);
	for (size_t i = 0; i < edges.size(); i++)
	{
		nodes[edges[i][0]]++;
		nodes[edges[i][1]]++;
	}
	std::vector<int> ans;
	int maxnodes = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (maxnodes < nodes[i])
		{
			std::vector<int>().swap(ans);
			maxnodes = nodes[i];
			ans.push_back(i);
		}
		else if(maxnodes == nodes[i]) ans.push_back(i);
	}

	return 0;
}