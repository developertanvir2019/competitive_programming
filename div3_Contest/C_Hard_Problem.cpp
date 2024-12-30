#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fast();
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll total = 0;
        ll firstRem = m, secondRem = m; // Remaining seats in row 1 and row 2
        ll arem = 0, brem = 0, crem = 0;

        // Allocate monkeys with preference for row 1
        if (a <= m) {
            total += a;
            firstRem -= a;
        } else {
            total += m;
            firstRem = 0;
            arem = a - m;
        }

        // Allocate monkeys with preference for row 2
        if (b <= m) {
            total += b;
            secondRem -= b;
        } else {
            total += m;
            secondRem = 0;
            brem = b - m;
        }

        // Allocate monkeys with no preference (`c`)
        crem = c;
        ll freeSeats = firstRem + secondRem; // Total remaining seats in both rows
        if (crem <= freeSeats) {
            total += crem;
        } else {
            total += freeSeats;
        }

        cout << total << "\n";
    }

    return 0;
}
