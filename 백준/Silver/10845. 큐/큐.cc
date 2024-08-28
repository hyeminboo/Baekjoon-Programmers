#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, num;
    string input;

    queue<int> q;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == "push") {
            cin >> num;
            q.push(num);
        }

        else if (input == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            } else {
                cout << "-1\n";
            }
        }

        else if (input == "size") {
            cout << q.size() << "\n";
        }

        else if (input == "empty") {
            cout << q.empty() << "\n";
        }

        else if (input == "front") {
            if (q.empty()) cout << "-1\n";
            else {
                cout << q.front() << "\n";
            }
        }

        else if (input == "back") {
            if (q.empty()) cout << "-1\n";
            else {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}
