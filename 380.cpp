// 380. O(1) 时间插入、删除和获取随机元素

/*
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class RandomizedSet
{
public:
	RandomizedSet() {
		
	}

	bool insert(int val) {
		if (ElementIndex.count(val)) return false;
		ElementIndex[val] = Element.size();
		Element.push_back(val);
		return true;
	}

	bool remove(int val) {
		if (ElementIndex.count(val))
		{
			int Index = ElementIndex[val];
			ElementIndex[Element.back()] = Index;
			swap(Element[Index], Element.back());
			Element.pop_back();
			ElementIndex.erase(val);
			return true;
		}
		return false;
	}

	int getRandom() {
		return Element[rand() % Element.size()];
	}

private:
	vector<int>Element;
	unordered_map<int, int>ElementIndex;
};

int main() {
	RandomizedSet a;
	a.insert(0);
	a.insert(1);
	a.remove(0);
	a.insert(2);
	a.remove(1);
	cout << a.getRandom() << endl;
	return 0;
}
*/