#include <iostream>

using namespace std;

int n, m;
int graph[101][101] = {0, };
bool visited[101] = {false, };
int cnt = 0;

void dfs(int from) {
    for (int i = 1; i <= n; i++) {
        if (graph[from][i] == 1) {
            if (!visited[i]) {
                visited[i] = true;
                cnt++;
                dfs(i);
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        graph[tmp1][tmp2] = graph[tmp2][tmp1] = 1;
    }

    visited[1] = true;
    dfs(1);

    cout << cnt;

    return 0;
}
