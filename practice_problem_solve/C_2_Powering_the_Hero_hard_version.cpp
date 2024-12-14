#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> deck(n);
        vector<int> bonus;
        
        for (int i = 0; i < n; i++) {
            cin >> deck[i];
        }
        
        ll power = 0;
        
        for (int i = 0; i < n; i++) {
            if (deck[i] != 0) {
                bonus.push_back(deck[i]);  // Collect bonus cards
            } else {
                if (!bonus.empty()) {
                    // Sort and take the largest bonus card
                    sort(bonus.rbegin(), bonus.rend()); 
                    power += bonus.back();
                    bonus.pop_back();
                }
            }
        }
        
        cout << power << "\n";
    }
    return 0;
}
