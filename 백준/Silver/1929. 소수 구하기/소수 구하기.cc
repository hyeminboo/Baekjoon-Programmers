#include <iostream>
#include <vector>


using namespace std;

void getPrimes(int m, int n) {
    vector<bool> primes(n+1, true);
    primes[0] = false; primes[1] = false;
    for (int i = 2; i * i < n + 1; i++) {
        if (!primes[i]) {
            continue;
        }
        for (int j = i * i; j < n + 1; j += i) {
            primes[j] = false;
        }
    }

    for (int i = m; i < primes.size(); i++) {
        if (primes[i]) {
            cout << i << "\n";
        }
    }

}

int main() {
    int m, n;
    cin >> m >> n;

    getPrimes(m, n);

    return 0;
}