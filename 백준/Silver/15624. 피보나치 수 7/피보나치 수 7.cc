#include <iostream>
#include <vector>

using namespace std;
const int NUM = 1000000007;
typedef long long ll;

ll fibo(int n, vector<ll>& v) {
    if (n <= 1) {
        return n;
    }
    if (v[n]) { // v[n]의 값이 존재
        return v[n];
    }
    return v[n] = (fibo(n - 1, v) + fibo(n - 2, v)) % NUM;
}

int main() {
    int n;
    cin >> n;

    vector<ll> v(n+1, 0);

    for (int i = 1; i <= n; i++) {
        v[i] = fibo(i, v);
    }
    
    cout << v[n];

    return 0;
}