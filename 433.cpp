// 433. 最小基因变化

/*
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<queue>

using namespace std;

class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
		
		unordered_set<string> cnt;
		unordered_set<string> Visited;
		for (size_t i = 0; i < bank.size(); i++)
		{
			cnt.emplace(bank[i]);
		}
		if (!cnt.count(end)) return -1;
		if (start == end) return 0;
		char key[4] = { 'A','C','G','T' };
		queue<string> Change;
		Change.emplace(start);
		Visited.emplace(start);
		int step = 0;
		while (!Change.empty())
		{
			step++;
			// 每次循环队列的值需要固定，每次固定的值表示第几步在变化可选的那些值
			int CurrChange = Change.size();
			for (size_t i = 0; i < CurrChange; i++)
			{
				string Current = Change.front();
				Change.pop();
				for (size_t j = 0; j < 8; j++)
				{
					for (size_t k = 0; k < 4; k++)
					{
						if (Current[j] != key[k])
						{
							string next = Current;
							next[j] = key[k];
							if (!Visited.count(next) && cnt.count(next))
							{
								if (next == end) return step;
								Visited.emplace(next);
								Change.emplace(next);
							}
						}
					}
				}
			}
		}
		return -1;
    }
};

int main() {

	string a = "AAAACCCC", b = "CCCCCCCC";
	vector<string> WhiteList{ "AAAACCCA", "AAACCCCA", "AACCCCCA", "AACCCCCC", 
		"ACCCCCCC", "CCCCCCCC", "AAACCCCC", "AACCCCCC" };
	Solution ans;
	cout << "answer is 4" << endl;
	cout << "my answer is " << ans.minMutation(a, b, WhiteList);
	
	return 0;
}
*/