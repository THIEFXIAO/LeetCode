// 819. 最常见的单词

/*
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

string mostCommonWord(string paragraph, vector<string>& banned) {
	unordered_map<string, int>Words;
	string Word = "";
	for (char ch : (paragraph + " "))
	{
		if (ch >= 'A' && ch <= 'Z') Word += (ch + 'a' - 'A');
		else if (ch >= 'a' && ch <= 'z') Word += ch;
		else if (Word != "")
		{
			Words[Word]++;
			Word = "";
		}
	}
	for (string Word : banned)
	{
		if (Words.count(Word)) Words.erase(Word);
	}
	pair<string, int> max = { "",0 };
	for (pair<string, int> word : Words)
	{
		if (word.second > max.second) max = word;
	}
	return max.first;
}

int main() {

	// string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
	// vector<string> banned = { "hit" };
	string paragraph = "Bob";
	vector<string> banned = {  };

	cout << mostCommonWord(paragraph, banned) << endl;

	return 0;
}
*/