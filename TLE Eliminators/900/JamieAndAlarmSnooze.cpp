#include <iostream>

using namespace std;

bool has_seven(int hh, int mm) {
    return (hh % 10 == 7 || hh / 10 == 7 || mm % 10 == 7 || mm / 10 == 7);
}

void solve() {
    int x, hh, mm;
    cin >> x >> hh >> mm;
    
    int y = 0;
    while (!has_seven(hh, mm)) {
        mm -= x;
        if (mm < 0) {
            mm += 60;
            hh -= 1;
            if (hh < 0) {
                hh = 23;
            }
        }
        y++;
    }
    
    cout << y << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}