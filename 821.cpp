// 821. ×Ö·ûµÄ×î¶Ì¾àÀë

/*
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:

	vector<int> shortestToChar(string s, char c) {
		vector<int>ans(s.size(), -1);
		int CharPos = -1 * s.size();
		for (size_t i = 0; i < s.size(); i++)
		{
			if (s[i] == c) CharPos = i;
			ans[i] = i - CharPos;
		}
		CharPos = 2 * s.size();
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] == c) CharPos = i;
			ans[i] = min(ans[i], CharPos - i);
		}
		return ans;
	}

	vector<int> shortestToCharMY(string s, char c) {
		vector<int>CharPos;
		for (size_t i = 0; i < s.size(); i++)
		{
			if (s[i] == c)CharPos.emplace_back(i);
		}
		vector<int>ans(s.size());
		int left = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (left == 0 && i <= CharPos[left])ans[i] = CharPos[left] - i;
			else if (CharPos.size() > left + 1)
			{
				ans[i] = min(abs(CharPos[left] - i), abs(CharPos[left + 1] - i));
			}
			else ans[i] = i - CharPos.back();
			if ((CharPos.size() > left + 1) && (CharPos[left + 1] - i == 0)) left++;
		}
		return ans;
	}
};

int main() {

	string s = "aaaba";
	char c = 'b';
	Solution ans;
	ans.shortestToChar(s, c);
	ans.shortestToCharMY(s, c);

	return 0;
}
*/