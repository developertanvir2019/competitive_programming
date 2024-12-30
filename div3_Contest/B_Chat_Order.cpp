#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fast();
    int n;
    cin >> n;

    deque<string> chatlist;
    unordered_set<string> seen;

    // Process the names in order
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        // If the name is already seen, remove it from chatlist
        if (seen.count(name)) {
            // Erase the name from the deque
            chatlist.erase(remove(chatlist.begin(), chatlist.end(), name), chatlist.end());
        }

        // Push the name to the front of the deque
        chatlist.push_front(name);
        seen.insert(name);  // Mark the name as seen
    }

    // Output the result
    for (const string &name : chatlist) {
        cout << name << "\n";
    }

    return 0;
}
