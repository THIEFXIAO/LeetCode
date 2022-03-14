// 599. 两个列表的最小索引总和

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> list1{ "Shogun","Tapioca Express","Burger King","KFC" };
    vector<string> list2{ "KNN","KFC","Burger King","Tapioca Express","Shogun" };

    int score = list1.size() + list2.size();
    vector<string> Restaurant;
    for (int i = 0; i < list1.size(); i++)
    {
        for (int j = 0; j < list2.size(); j++)
        {
            if (list1[i] == list2[j])
            {
                if (score > (i + j))
                {
                    vector<string>().swap(Restaurant);
                    score = i + j;
                }
                if (score == (i + j))
                {
                    Restaurant.push_back(list1[i]);
                }
            }
        }
    }
    cout << Restaurant[1] << endl;

    system("pause");
    return 0;
}