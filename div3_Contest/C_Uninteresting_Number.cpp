#include <iostream>
#include <string>
using namespace std;

bool canBeDivisibleBy9(const string& n) {
    int sum = 0;

    for (char c : n) {
        sum += c - '0'; 
    }
    if (sum % 9 == 0) {
        return true;
    }
    for (char c : n) {
        int digit = c - '0';
        int squaredDigit = digit * digit; 
        int newSum = sum - digit + squaredDigit;
        if (newSum % 9 == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string n;
        cin >> n;  

        if (canBeDivisibleBy9(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
