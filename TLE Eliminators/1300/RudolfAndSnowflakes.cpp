#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> valid_n;

void precompute() {
    for (long long k = 2; k * k <= 1000000; ++k) {
        long long current = 1 + k + k * k;
        long long term = k * k;
        
        valid_n.insert(current);
        while (true) {
            if (__builtin_mul_overflow(term, k, &term)) break;
            current += term;
            if (current > 1000000) break;
            valid_n.insert(current);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (valid_n.count(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
