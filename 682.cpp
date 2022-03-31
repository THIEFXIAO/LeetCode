// 682. ∞Ù«Ú±»»¸ 

/*
#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {

	vector<string> ops = { "1" };

	int score = 0, top = 0, topnext = 0;
	stack<int> scorestack;
	for (size_t i = 0; i < ops.size(); i++)
	{
		switch (ops[i][0])
		{
			case'C':
				score -= scorestack.top();
				scorestack.pop();
				break;
			case'D':
				score += 2 * scorestack.top();
				scorestack.push(2 * scorestack.top());
				break;
			case'+':
				top = scorestack.top();
				scorestack.pop();
				topnext = scorestack.top();
				scorestack.push(top);
				scorestack.push(top + topnext);
				score += scorestack.top();
				break;
			default:
				scorestack.push(stoi(ops[i]));
				score += scorestack.top();
				break;
		}
	}
	cout << score << endl;

	return 0;
	std::system("pause");
}
*/