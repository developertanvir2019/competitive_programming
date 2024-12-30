#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

int main() {
    fast();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> b(n);
        unordered_map<int, int> freq; // Frequency of elements in b
        int max_count = 0;            // Maximum frequency observed
        int current_mode = 0;         // Current mode

        for (int i = 0; i < n; ++i) {
            int x = a[i];

            // Always append `a[i]` to `b` to ensure it's the mode
            b[i] = x;
            freq[x]++;

            // Update max_count and current_mode
            if (freq[x] > max_count) {
                max_count = freq[x];
                current_mode = x;
            }
        }

        // Output the constructed array b
        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
