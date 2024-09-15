#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    string name;
    int kor, eng, math;
};

bool cmp(student& s1, student& s2) {
    if (s1.kor != s2.kor) {
        return s1.kor > s2.kor;
    }
    if (s1.eng != s2.eng) {
        return s1.eng < s2.eng;
    }
    if (s1.math != s2.math) {
        return s1.math > s2.math;
    }
    return s1.name < s2.name;
}

int main() {
    int n;
    cin >> n;

    vector<student> score;
    score.assign(n, {});

    for (int i = 0; i < n; i++) {
        cin >> score[i].name >> score[i].kor >> score[i].eng >> score[i].math;
    }

    sort(score.begin(), score.end() + 1, cmp);

    for (int i = 0; i < n; i++) {
        cout << score[i].name << "\n";
    }

    return 0;
}