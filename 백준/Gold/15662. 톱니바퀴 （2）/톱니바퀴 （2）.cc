#include <iostream>
#include <vector>

using namespace std;

void rotate (vector<string>& v, vector<int>& v_dir) {
    for (int i = 1; i < v.size(); i++) {
        if (v_dir[i] == 1) {
            v[i] = v[i].substr(7, 1) + v[i].substr(0, 7);
        }
        else if (v_dir[i] == -1) {
            v[i] = v[i].substr(1, 7) + v[i].substr(0, 1);
        }
    }
}

void getDir (vector<string>& v, vector<int>& v_dir, int num, int dir) {
    int left = num, right = num, tmp = dir;
    v_dir[num] = dir;

    while (left > 1) {
        if (v[left-1][2] == v[left][6]) {
            break;
        } else {
            v_dir[left-1] = -dir;
            left--;
            dir = -dir;
        }
    }

    while (right < v.size() - 1) {
        if (v[right+1][6] == v[right][2]) {
            break;
        } else {
            v_dir[right+1] = -tmp;
            right++;
            tmp = -tmp;
        }
    }
}

int main() {
    // 입력
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k;
    cin >> t;

    vector<string> v (t+1, "");

    for (int i = 1; i <= t; i++) {
        cin >> v[i];
    }

    cin >> k;
    int num, dir;

    while (k--) {
        cin >> num >> dir;
        vector<int> v_dir (t+1, 0);
        getDir(v, v_dir, num, dir);
        rotate(v, v_dir);
    }
    

    int cnt = 0;
    for (int i = 1; i <= t; i++) {
        if (v[i][0] == '1') {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
