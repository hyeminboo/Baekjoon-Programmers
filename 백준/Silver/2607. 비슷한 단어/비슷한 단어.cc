#include <iostream>
#include <vector>

using namespace std;

void count(string word, vector<int>& v) {
    for (int i = 0; i < word.size(); i++) {
        v[word[i] - 'A'] += 1;
    }
}

bool cmp(vector<int>& v1, vector<int>& v2) {
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        cnt += abs(v1[i] - v2[i]);
    }
    
    if (cnt > 2) {
        return false;
    }

    return true;
}


int main() {
    int n;
    cin >> n;

    vector<int> v1(26, 0);

    string input, test;
    cin >> input;

    count(input, v1);

    int cnt = 0;
    for (int i = 1; i < n; i++) {
        cin >> test;
        int is = input.size();
        int ts = test.size();

        if ((abs(is - ts)) > 1) {
            continue;
        }

        vector<int> v2(26, 0);
        count(test, v2);

        if (cmp(v1, v2)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}