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
        for (int i = 0; i < n; i++) {
            cin >> deck[i];
        }
        
        priority_queue<int> pq; 
        ll power = 0;      
        
        for (int i = 0; i < n; i++) {
            if (deck[i] == 0) {
                if (!pq.empty()) {
                    power += pq.top();
                    pq.pop();
                }
            } else {
                pq.push(deck[i]);
            }
        }
        
        cout << power << "\n";
    }
    return 0;
}
