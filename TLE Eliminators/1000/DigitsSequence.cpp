#include <iostream>
#include <string>

using namespace std;

void solve() {
    int k;
    cin >> k;
    
    string s = "";
    int num = 1;
    while (s.length() < k) {
        s += to_string(num);
        num++;
    }
    cout << s[k - 1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}