#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fast();
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        s += s;
        int max_wait = 0, last_g = -1;
        for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                last_g = i; 
            }
            if (i < n && s[i] == c && last_g != -1) {
                max_wait = max(max_wait, last_g - i);
            }
        }

        cout << max_wait << '\n';
    }
    return 0;
}
