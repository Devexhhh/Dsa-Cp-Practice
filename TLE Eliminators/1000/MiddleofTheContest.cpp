#include <iostream>
#include <iomanip>

using namespace std;

void solve() {
    int h1, m1, h2, m2;
    char colon;

    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;
    
    int total_minutes_1 = h1 * 60 + m1;
    int total_minutes_2 = h2 * 60 + m2;

    int mid_minutes = (total_minutes_1 + total_minutes_2) / 2;
    
    int h3 = mid_minutes / 60;
    int m3 = mid_minutes % 60;

    cout << setfill('0') << setw(2) << h3 << ":" 
         << setfill('0') << setw(2) << m3 << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}