#include <bits/stdc++.h>
using namespace std;

struct Ball {
    int x;
    int c;
};

int main() {
    int Q;
    cin >> Q;
    deque<Ball> q;
    vector<int> o;
    for(int i=0; i<Q; i++) {
        int order, x, c;
        cin >> order;
        if(order == 1) {
            cin >> x >> c;
            q.push_back({x, c});
        } else {
            cin >> c;
            o.push_back(c);
        }
    }
    for(auto c: o) {
        long long sum = 0;
        while(c > 0) {
            Ball first = q.front();
            if(first.c > c) {
                sum += (long long)first.x * c;
                first.c -= c;
                q.pop_front();
                q.push_front(first);
                break;
            } else {
                q.pop_front();
                sum += (long long)first.x * first.c;
                c -= first.c;
            }
        }
        cout << sum << endl;
    }
    return 0;
}