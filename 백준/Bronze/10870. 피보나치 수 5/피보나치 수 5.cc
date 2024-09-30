#include <iostream>

using namespace std;

void fibo(int& fir, int& sec) {
    int tmp = sec;
    sec = fir + sec;
    fir = tmp;
}

int main() {
    int fir = 0, sec = 1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        fibo(fir, sec);
    }

    cout << fir;

    return 0;
}