#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    map<int, string> dict;
    map<string, int> dict2;

    string name;

    for (int i = 1; i < n + 1; i++) {
        cin >> name;
        dict.insert({i, name});
        dict2.insert({name, i});
    }

    string input;

    while (m--) {
        cin >> input;
        if (isdigit(input[0])) {
            cout << dict[stoi(input)] << "\n";
        }
        else {
            cout << dict2[input] << "\n";
        }
    }

    return 0;
}