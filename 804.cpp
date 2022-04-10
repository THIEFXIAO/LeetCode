// 804. Î¨Ò»Ä¦¶ûË¹ÃÜÂë´Ê

/*
#include<iostream>
#include<unordered_set>
#include<vector>
#include<string>

using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {

	string MorseCode[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....",
		"..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
		"..-","...-",".--","-..-","-.--","--.." };
	unordered_set<string> Translate;

	for (string word : words)
	{
		string NowTranslate;
		for (char ch : word)
		{
			NowTranslate += MorseCode[ch - 'a'];
		}
		Translate.insert(NowTranslate);
	}
	return Translate.size();
}


int main() {

	vector<string> words = { "gin", "zen", "gig", "msg" };

	int ans = uniqueMorseRepresentations(words);

	return 0;
}
*/
