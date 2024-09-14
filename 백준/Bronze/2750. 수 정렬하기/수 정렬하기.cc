#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int least, tmp;
    for (int i = 0; i < n-1; i++) {
        least = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[least]) {
                tmp = v[least];
                v[least] = v[j];
                v[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}