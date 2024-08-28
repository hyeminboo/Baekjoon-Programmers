#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, x;
    string input;

    deque<int> dq;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == "push_front") {
            cin >> x;
            dq.push_front(x);
        }

        else if (input == "push_back") {
            cin >> x;
            dq.push_back(x);
        }

        else if (input == "pop_front") {
            if (dq.empty()) cout << "-1\n";
            else {
                int f = dq.front();
                cout << f << "\n";
                dq.pop_front();
            } 
        }

        else if (input == "pop_back") {
            if (dq.empty()) cout << "-1\n";
            else {
                int b = dq.back();
                cout << b << "\n";
                dq.pop_back();
            }
        }

        else if (input == "size") {
            cout << dq.size() << "\n";
        }

        else if (input == "empty") {
            cout << dq.empty() << "\n";
        }

        else if (input == "front") {
            if (dq.empty()) cout << "-1\n";
            else {
                cout << dq.front() << "\n";
            }
        }

        else {
            if (dq.empty()) cout << "-1\n";
            else {
                cout << dq.back() << "\n";
            }
        }
    }

    return 0;
}