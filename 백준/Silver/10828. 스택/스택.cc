#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num;
    string input;

    stack<int> s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == "push") {
            cin >> num;
            s.push(num);
        } else if (input == "pop") {
            if (s.empty()) cout << "-1\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        } else if (input == "size") {
            cout << s.size() << "\n";
        } else if (input == "empty") {
            cout << s.empty() << "\n";
        } else {
            if (!s.empty()) {
                cout << s.top() << "\n";
            } else {
                cout << "-1\n";
            }
        }

    }
    return 0;
}
