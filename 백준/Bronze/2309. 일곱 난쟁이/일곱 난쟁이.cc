#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int CNT = 9;

void find(vector<int> &height) {
    int sum = 0;
    for (int i = 0; i < CNT; i++) {
        sum += height[i];
    }

    for (int i = 0; i < CNT; i++) {
        for (int j = i + 1; j < CNT; j++) {
            if (sum - height[i] - height[j] == 100) {
                height.erase(height.begin() + j);
                height.erase(height.begin() + i);
                return;
            }
        }
    }
}

int main() {
    vector<int> height(CNT);

    for (int i = 0; i < CNT; i++) {
        cin >> height[i];
    }

    find(height);
    sort(height.begin(), height.end());

    for (auto it: height) {
        cout << it << "\n";
    }



    return 0;
}