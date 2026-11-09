#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    long long sum_rooms = 0;
    int cur_dorm = 0;
    
    for (int i = 0; i < m; ++i) {
        long long b;
        cin >> b;
        while (b > sum_rooms + a[cur_dorm]) {
            sum_rooms += a[cur_dorm];
            cur_dorm++;
        }
        cout << cur_dorm + 1 << " " << b - sum_rooms << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}