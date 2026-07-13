#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    size_t star_pos = s.find('*');

    if (star_pos == string::npos) {
        if (s == t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return 0;
    }

    if (n - 1 > m) {
        cout << "NO\n";
        return 0;
    }

    string prefix_s = s.substr(0, star_pos);
    string prefix_t = t.substr(0, star_pos);

    string suffix_s = s.substr(star_pos + 1);
    string suffix_t = t.substr(m - suffix_s.length());

    if (prefix_s == prefix_t && suffix_s == suffix_t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
