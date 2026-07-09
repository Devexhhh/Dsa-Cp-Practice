#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, l, a;cin >> n >> l >> a;
    long long ans = 0;
    long long last_end = 0;

    for (int i = 0; i < n; i++) {
        long long s, len;
        cin >> s >> len;
        ans += (s - last_end) / a;
        last_end = s + len;
    }
    ans += (l - last_end) / a;
    cout << ans << "\n";
    return 0;
}
