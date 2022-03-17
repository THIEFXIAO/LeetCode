// 720. �ʵ�����ĵ���

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {

    vector<string> words{ "a", "banana", "app", "appl", "ap", "apply", "apple" };

    // �����ֵ��п��ܻ��ظ�����ʹ���������У����ڹ�����ϣ�����ʱɾ����ͬԪ��
    sort(words.begin(), words.end(), [&](string& a, string& b) {
        if (a.size() == b.size())return a < b;
        return a.size() < b.size();
        });

    unordered_set<string>cnt;
    cnt.insert("");
    string longestword = "";
    for (auto& word : words)
    {
        if (cnt.count(word.substr(0, word.size() - 1))) {
            cnt.insert(word);
            longestword = word;
        }
    }

    cout << longestword << endl;
    

    system("pause");
    return 0;
}