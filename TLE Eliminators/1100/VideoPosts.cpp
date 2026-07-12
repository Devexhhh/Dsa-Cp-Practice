#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    if (total_sum % k != 0) {
        cout << "No\n";
        return 0;
    }

    int target = total_sum / k;
    vector<int> segment_lengths;
    int current_sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        current_sum += a[i];
        count++;
        
        if (current_sum == target) {
            segment_lengths.push_back(count);
            current_sum = 0;
            count = 0;
        } else if (current_sum > target) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    for (size_t i = 0; i < segment_lengths.size(); ++i) {
        cout << segment_lengths[i] << (i == segment_lengths.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
