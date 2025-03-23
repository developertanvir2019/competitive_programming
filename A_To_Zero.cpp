#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast();
    int t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        int steps = 0;
        
        while (n > 0) {
            if (n % 2 == 0) {
                if (k % 2 == 0) {
                    n -= k;
                } else {
                    n -= (k - 1); 
                }
            } else {
                if (k % 2 == 1) {
                    n -= k;
                } else {
                    n -= (k - 1);
                }
            }
            steps++;
        }

        cout << steps << "\n";
    }
    
    return 0;
}
