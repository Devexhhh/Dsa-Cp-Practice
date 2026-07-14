#include <iostream>
using namespace std;

int main() {
    int A, B, C, N;
    cin >> A >> B >> C >> N;
    int total_visited = A + B - C;
    if (C > A || C > B || total_visited >= N) {
        cout << -1 << endl;
    } else {
        cout << N - total_visited << endl;
    }
    
    return 0;
}
