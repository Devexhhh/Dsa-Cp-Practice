#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double r;
    cin >> n >> r;
    double pi = acos(-1.0);
    double theta = pi / n;
    double R = (r * sin(theta)) / (1.0 - sin(theta));
    cout << fixed << setprecision(10) << R << "\n";
    return 0;
}
