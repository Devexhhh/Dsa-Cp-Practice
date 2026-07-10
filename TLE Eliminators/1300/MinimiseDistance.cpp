#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solveForDirection(vector<int>& v, int k) {
    if (v.empty()) return 0;
    
    sort(v.begin(), v.end());
    long long total_distance = 0;

    for (int i = v.size() - 1; i >= 0; i -= k) {
        total_distance += 2LL * v[i];
    }
    
    return total_distance;
}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> pos, neg;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x > 0) pos.push_back(x);
        else if (x < 0) neg.push_back(-x);
    }
    
    long long dist_pos = solveForDirection(pos, k);
    long long dist_neg = solveForDirection(neg, k);
    
    long long max_val = 0;
    if (!pos.empty()) max_val = max(max_val, (long long)pos.back());
    if (!neg.empty()) max_val = max(max_val, (long long)neg.back());

    long long ans = dist_pos + dist_neg - max_val;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
