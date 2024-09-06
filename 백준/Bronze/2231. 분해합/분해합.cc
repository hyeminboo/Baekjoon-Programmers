#include <iostream>

using namespace std;

int sol(int n) {
    for (int i = 1; i < n; i++) {
        int sum = i;
        int tmp = i;

        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if (n == sum) {
            return i;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    
    cout << sol(n);

    return 0;
}