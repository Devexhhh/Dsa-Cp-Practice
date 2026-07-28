#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    if (!(cin >> n >> x)) return 0;

    vector<int> a(n);
    map<int, int> orig_count;
    map<int, int> op_count;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        orig_count[a[i]]++;
    }

    for (auto& p : orig_count) {
        if (p.second >= 2) {
            cout << 0 << "\n";
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        int transformed = a[i] & x;
        if (transformed != a[i]) {
            if (orig_count[transformed] > 0) {
                cout << 1 << "\n";
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int transformed = a[i] & x;
        op_count[transformed]++;
        if (op_count[transformed] >= 2) {
            cout << 2 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
