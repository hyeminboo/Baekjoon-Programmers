#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int> pq;

    int num;
    while (n--) {
        cin >> num;
        if (num != 0) {
            pq.push(num);
        }
        else {
            if (pq.empty()) {
                cout << "0\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
    
    return 0;
}