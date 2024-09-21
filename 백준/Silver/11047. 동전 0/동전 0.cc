#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> coins (n, 0);

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int cnt = 0;
    while (n--) {
        cnt += k / coins[n];
        k %= coins[n];
    }

    cout << cnt;

    return 0;
}