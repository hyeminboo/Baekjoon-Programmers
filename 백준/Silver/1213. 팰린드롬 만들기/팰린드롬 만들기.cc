#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 입력
    string input;
    cin >> input;

    vector<int> alpha_cnt (26, 0);
    vector<char> alphas = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; i < input.length(); i++) {
        alpha_cnt[input[i] - 'A']++;
    }

    string ans = "";
    char middle;

    int odd = 0, flag = 0;
    for (int i = 0; i < alpha_cnt.size(); i++) {
        if (alpha_cnt[i] % 2 != 0) {
            odd++;

            if (odd > 1) {
                flag = 1;
                break;
            }

            flag = 2;
            middle = alphas[i];
        }
        
        for (int j = 0; j < alpha_cnt[i]/2; j++) {
            ans += alphas[i];
        }
    }

    if (flag == 1) {
        cout << "I'm Sorry Hansoo";
    } else {
        cout << ans;
        if (flag == 2) {
            cout << middle;
        }
        for (int i = ans.length() - 1; i >= 0; i--) {
            cout << ans[i];
        }
    }

    return 0;
}
