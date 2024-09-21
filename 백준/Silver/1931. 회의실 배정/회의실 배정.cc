#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v (n, {0, 0});

    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    int end = -1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second < end) {
            continue;
        }

        end = v[i].first;
        cnt++;
    }

    cout << cnt;
    
    return 0;
}