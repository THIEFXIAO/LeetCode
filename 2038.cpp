// 2038. 如果相邻两个颜色均相同则删除当前颜色

#include <vector>
#include <iostream>

using namespace std;

int main() {

	string colors = "ABBBBBBBAAA";

	char* A = &colors[0], * B = &colors[0];
	int size = colors.size();
	int Alice = 0, Bob = 0;
	for (int i = 0; i < size; i++, A++, B++)
	{
		if (*A == 'A' && *A == *(A + 1) && *A == *(A + 2))
		{
			Alice++;
		}
		if (*B == 'B' && *B == *(B + 1) && *B == *(B + 2))
		{
			Bob++;
		}
	}
	if (Alice > Bob)
	{
		cout << "Alice" << endl;
	}
	else
	{
		cout << "Bob" << endl;
	}
	cout << Alice << endl;
	cout << Bob << endl;

	return 0;
	system("pause");
}

/* 官解 爷的代码还是糙
class Solution {
public:
	bool winnerOfGame(string colors) {
		int freq[2] = {0, 0};
		char cur = 'C';
		int cnt = 0;
		for (char c : colors) {
			if (c != cur) {
				cur = c;
				cnt = 1;
			} else if (++cnt >= 3) {
				++freq[cur - 'A'];
			}
		}
		return freq[0] > freq[1];
	}
};
*/