#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long min_L = 0;
    for (int i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;
        min_L = max(min_L, x + y);
    }
    
    cout << min_L << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}