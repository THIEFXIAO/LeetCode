// 953. —È÷§Õ‚–«”Ô¥ µ‰

/*
#include<iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
private:
    bool IsLarge(string a, string b, map<char, int> list)
    {
        int n = a.size() < b.size() ? a.size() : b.size();
        for (size_t i = 0; i < n; i++)
        {
            if (list[a[i]] < list[b[i]])return true;
            else if (list[a[i]] > list[b[i]])return false;
        }
        if (a.size() > b.size())return false;
        return true;
    }

    bool IsLarge(string a, string b, string order)
    {
        int n = a.size() < b.size() ? a.size() : b.size();
        for (size_t i = 0; i < n; i++)
        {
            if (order.find(a[i]) < order.find(b[i])) return true;
            if (order.find(a[i]) > order.find(b[i])) return false;
        }
        if (a.size() > b.size())return false;
        return true;
    }

public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, int> list;
        for (size_t i = 0; i < order.size(); i++) list[order[i]] = i;
        for (size_t i = 1; i < words.size(); i++)
        {
            if (!IsLarge(words[i - 1], words[i], list)) return false;
        }
        return true;
    }
    bool isAlienSorted2(vector<string>& words, string order) {
        for (size_t i = 1; i < words.size(); i++)
        {
            bool flag = true;
            int n = words[i - 1].size() < words[i].size() ? words[i - 1].size() : words[i].size();
            for (size_t j = 0; j < n; j++)
            {
                if (order.find(words[i - 1][j]) < order.find(words[i][j]))
                {
                    flag = false; break;
                }
                if (order.find(words[i - 1][j]) > order.find(words[i][j])) return false;
            }
            if (flag && (words[i - 1].size() > words[i].size())) return false;
        }
        return true;
    }
    bool isAlienSorted3(vector<string>& words, string order) {
        vector<int> list(order.size());
        for (size_t i = 0; i < order.size(); i++)
        {
            list[order[i] - 'a'] = i;
        }
        for (size_t i = 1; i < words.size(); i++)
        {
            bool flag = true;
            for (size_t j = 0; j < words[i - 1].size() && j < words[i].size(); j++)
            {
                if (list[words[i - 1][j] - 'a'] < list[words[i][j] - 'a'])
                {
                    flag = false; break;
                }
                if (list[words[i - 1][j] - 'a'] > list[words[i][j] - 'a']) return false;
            }
            if (flag && (words[i - 1].size() > words[i].size())) return false;
        }
        return true;
    }
};

int main() {

    // vector<string> words{ "hello","leetcode" };
    // string order = "hlabcdefgijkmnopqrstuvwxyz"; // true
    vector<string> words{ "word","world","row" };
    string order = "worldabcefghijkmnpqstuvxyz"; // false
    Solution ans;
    cout << ans.isAlienSorted3(words, order) << endl;
	return 0;
}
*/