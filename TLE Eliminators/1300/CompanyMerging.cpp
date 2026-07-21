#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> max_salaries(n);
    vector<vector<int>> companies(n);
    int overall_max = 0;

    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        companies[i].resize(m);
        int current_max = 0;

        for (int j = 0; j < m; ++j) {
            cin >> companies[i][j];
            current_max = max(current_max, companies[i][j]);
        }

        max_salaries[i] = current_max;
        overall_max = max(overall_max, current_max);
    }

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        long long diff = overall_max - max_salaries[i];
        ans += diff * companies[i].size();
    }

    cout << ans << "\n";

    return 0;
}
