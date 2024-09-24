#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;  

    int cnt_1 = 0, cnt_2 = 0;
    while(n--) {
        int x;
        cin >> x;
        cnt_2 += x / 2;
        cnt_1 += x % 2;
    }

    if (cnt_1 == cnt_2) {
        cout << "YES\n";
    } else if (cnt_2 > cnt_1) {
        cnt_2 -= cnt_1;
        if (cnt_2 % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    else {
        cout << "NO\n";
    }
    
    return 0;
}
