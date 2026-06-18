#include <bits/stdc++.h>
using namespace std;

const int maxn = 507;

int n, m, nxt[8][2] = {
    {-1, -1}, {-1, 0}, {-1, 1},
    {0, -1},           {0, 1},
    {1, -1},  {1, 0},  {1, 1}
};

char mp[maxn][maxn];

bool check(int x, int y) {
    if (mp[x][y] == '*') return true;

    int cnt = 0, aim = isdigit(mp[x][y]) ? mp[x][y] - '0' : 0;

    for (int k = 0; k < 8; k++) {
        if (mp[x + nxt[k][0]][y + nxt[k][1]] == '*')
            cnt++;
    }

    return cnt == aim;
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> mp[i] + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (check(i, j))
                continue;

            return 0 * puts("NO");
        }
    }

    return 0 * puts("YES");
}