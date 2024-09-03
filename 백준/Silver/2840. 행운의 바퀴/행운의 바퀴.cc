#include <iostream>
#include <vector>

using namespace std;

string findAlpha(int n, int k) {

    vector<char> alphas(n, '?'); // n 만큼의 크기의 벡터를 '?'로 초기화

    int idx = 0;
    bool flag = true;

    for (int i = 0; i < k; i++) {
        int num;
        char alpha;

        cin >> num >> alpha;

        int order = (idx + num) % n; // 화살표가 가리키는 곳

        if (alphas[order] == '?') {
            for (int j = 0; j < n; j++) {
                if (alphas[j] == alpha) {
                    flag = false;
                    break;
                }
            }
            alphas[order] = alpha;
        
        } else if (alphas[order] != alpha) {
            flag = false;
        }

        idx = order;

    }
    
    string output = "";

    if (flag == false) {
        output = "!";
    } else {
        for (int j = 0; j < n; j++) {
        if (idx < 0) {
            idx += n;
        }
        output += alphas[idx];
        idx--;
    }

    }

    return output;
    
}

int main() {
    // 입력
    int n, k;
    cin >> n >> k;

    cout << findAlpha(n, k);

    return 0;
}