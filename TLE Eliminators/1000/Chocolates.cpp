#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total_chocolates = 0;
    long long current_limit = 2e18; 
    for (int i = n - 1; i >= 0; --i) {
        long long buy = min(a[i], current_limit - 1);
        if (buy < 0) {
            buy = 0;
        }
        total_chocolates += buy;
        current_limit = buy;
    }

    cout << total_chocolates << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}