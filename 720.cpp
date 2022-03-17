// 720. 词典中最长的单词

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {

    vector<string> words{ "a", "banana", "app", "appl", "ap", "apply", "apple" };

    // 由于字典中可能会重复，故使用升序排列，再在构建哈希表查找时删除相同元素
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