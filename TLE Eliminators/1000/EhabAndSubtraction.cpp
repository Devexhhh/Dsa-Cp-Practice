#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    int subtracted = 0;
    int idx = 0;
    
    for (int i = 0; i < k; ++i) {
        while (idx < n && a[idx] <= subtracted) {
            idx++;
        }
        if (idx == n) {
            cout << 0 << "\n";
        } else {
            cout << a[idx] - subtracted << "\n";
            subtracted = a[idx];
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}