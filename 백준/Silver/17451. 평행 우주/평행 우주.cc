#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // 입력
    int n;
    cin >> n;

    vector<int> v (n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long max = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= max) {
            max = v[i];
        }
        else {
            if (max % v[i] == 0) {
                continue;
            }
            max = v[i] * (max / v[i] + 1);
        }
    }

    cout << max;

    return 0;
}