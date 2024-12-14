#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fast();
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int k;
        cin >> k; // Total number of elements

        vector<int> a(k);
        unordered_set<int> elements; // To check existence efficiently
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
            elements.insert(a[i]);
        }

        // Find valid n and m
        pair<int, int> result = {-1, -1}; // Initialize with invalid pair
        for (int i = 1; i * i <= k; ++i) {
            if (k % i == 0) {
                int n = i;
                int m = k / i;
                // Check if both n and m exist in the array
                if (elements.count(n) && elements.count(m)) {
                    result = {n, m};
                    break; // Found a valid pair
                }
            }
        }

        // Output the result
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
