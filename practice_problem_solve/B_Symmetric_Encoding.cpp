#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fast();
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        // Step 1: Create the sorted list of distinct characters from b
        string unq = b;
        sort(unq.begin(), unq.end());
        unq.erase(unique(unq.begin(), unq.end()), unq.end());  // Remove duplicates

        // Step 2: Reverse the string unq to get the encoding order
        reverse(unq.begin(), unq.end());

        // Step 3: Decode the string b using the map from reversed unq
        unordered_map<char, char> decode_map;
        for (int i = 0; i < unq.size(); i++) {
            decode_map[unq[i]] = unq[unq.size() - 1 - i];
        }

        // Step 4: Map characters from b back to the original string
        string result = "";
        for (char ch : b) {
            result += decode_map[ch];
        }

        // Output the result
        cout << result << endl;
    }

    return 0;
}
