#include <iostream>
#include <queue>

using namespace std;

struct cmp {
    bool operator() (const int& x1, const int& x2) {
        return x1 > x2;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, x;
    cin >> n;

    priority_queue<int, vector<int>, cmp> pq;

    int tmp = n;
    while (n--) {
        for (int i = 0; i < tmp; i++) {
            cin >> x;
            pq.push(x);
            if (pq.size() > tmp) {
                pq.pop();
            }
        }
    }
    
    cout << pq.top();

    return 0;
}
