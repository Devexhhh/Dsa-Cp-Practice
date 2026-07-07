#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> degree(n + 1, 0);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }

    int leaf_count = 0;
    for (int i = 1; i <= n; ++i) {
        if (degree[i] == 1) {
            leaf_count++;
        }
    }

    cout << leaf_count << "\n";

    return 0;
}
