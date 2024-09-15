#include <iostream>
#include <set>

using namespace std;


int main() {
    int n;
    cin >> n;

    set<string, greater<string>> workers;

    string name, cond;

    for (int i = 0; i < n; i++) {
        cin >> name >> cond;
        if (cond == "enter") {
            workers.insert(name);
        }
        else {
            workers.erase(name);
        } 
    }

    for (auto iter:workers) {
        cout << iter << "\n";
    }

    return 0;
}