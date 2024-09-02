#include <iostream>

using namespace std;

int getGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return getGcd(b, a%b);    
}

int main() {
    int a, b;
    cin >> a >> b;

    int gcd = getGcd(max(a, b), min(a, b));
    int lcm = a * b / gcd;

    cout << gcd << "\n" << lcm;

    return 0;
}
