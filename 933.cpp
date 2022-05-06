// 933. 最近的请求次数

/*
#include<iostream>
#include<queue>

using namespace std;

class RecentCounter {
private:
    queue<int> PingTimes;

public:
    RecentCounter() {

    }

    int ping(int t) {
        PingTimes.push(t);
        while (t - PingTimes.front() > 3000)
        {
            PingTimes.pop();
        }
        return PingTimes.size();
    }
};

int main() {

    RecentCounter* obj = new RecentCounter();
    cout << obj->ping(1) << endl;
    cout << obj->ping(100) << endl;
    cout << obj->ping(3001) << endl;
    cout << obj->ping(3002) << endl;
    cout << obj->ping(9002) << endl;

    return 0;
}
*/