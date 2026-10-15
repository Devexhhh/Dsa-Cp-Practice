#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // Check possible values for k (from 2 up to 30)
    for (int k = 2; k <= 30; ++k) {
        long long denominator = (1LL << k) - 1; // 2^k - 1
        
        if (n % denominator == 0) {
            cout << n / denominator << "\n";
            return;
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}