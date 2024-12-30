#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Find global min and max
        int min_a = a[0], max_a = a[0];
        for (int i = 1; i < n; ++i) {
            min_a = min(min_a, a[i]);
            max_a = max(max_a, a[i]);
        }

        // Look for a valid subsegment
        bool found = false;
        for (int i = 0; i < n - 1; ++i) {
            if ((a[i] != min_a && a[i] != max_a) || (a[i + 1] != min_a && a[i + 1] != max_a)) {
                cout << i + 1 << " " << i + 2 << endl; // Output 1-based indices
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl; // No valid subsegment found
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
