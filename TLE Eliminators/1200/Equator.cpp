#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    long long half = (total + 1) / 2;
    long long current_sum = 0;
    
    for (int i = 0; i < n; i++) {
        current_sum += a[i];
        if (current_sum >= half) {
            cout << i + 1 << "\n";
            break;
        }
    }

    return 0;
}
