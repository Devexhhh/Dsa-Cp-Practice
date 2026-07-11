#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    long long s;
    cin >> n >> s;
    int potted_balls = 0;
    for (int i = 0; i < n; ++i) {
        int dx, dy;
        long long x, y; cin >> dx >> dy >> x >> y;
        bool on_main_diag = (x == y && dx == dy);
        bool on_anti_diag = (x + y == s);

        if (on_main_diag || on_anti_diag) {
            potted_balls++;
        }
    }
    cout << potted_balls << "\n";
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
