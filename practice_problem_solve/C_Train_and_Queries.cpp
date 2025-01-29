#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        unordered_map<int, int> first_occurrence, last_occurrence;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (first_occurrence.find(arr[i]) == first_occurrence.end()) {
                first_occurrence[arr[i]] = i;
            }
            last_occurrence[arr[i]] = i;
        }
        


        // Step 2: Process each query
        while (k--) {
            int a, b;
            cin >> a >> b;
            
            // Check if both stations exist and if a appears before or at the position of b
            if (first_occurrence.count(a) && last_occurrence.count(b) && first_occurrence[a] <= last_occurrence[b]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}
