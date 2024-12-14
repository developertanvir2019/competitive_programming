#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
    int q; // Number of queries
    cin >> q;

    queue<pair<int, int>> monocarpQueue; // Queue for Monocarp: {customerID, spending}
    priority_queue<pair<int, int>> polycarpPQ; // Max-Heap for Polycarp: {spending, -customerID}
    map<int, bool> served; // Keeps track of served customers

    int customerID = 1; // Unique customer ID
    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            // Add a new customer
            int m;
            cin >> m;
            monocarpQueue.push({customerID, m});
            polycarpPQ.push({m, -customerID});
            served[customerID] = false; // Mark customer as not served
            customerID++;
        } 
        else if (type == 2) {
            // Monocarp serves a customer (FIFO)
            while (!monocarpQueue.empty() && served[monocarpQueue.front().first]) {
                monocarpQueue.pop(); // Skip already served customers
            }
            if (!monocarpQueue.empty()) {
                int servedID = monocarpQueue.front().first;
                cout << servedID << " ";
                served[servedID] = true; // Mark as served
                monocarpQueue.pop();
            }
        } 
        else if (type == 3) {
            // Polycarp serves a customer (max spending)
            while (!polycarpPQ.empty() && served[-polycarpPQ.top().second]) {
                polycarpPQ.pop(); // Skip already served customers
            }
            if (!polycarpPQ.empty()) {
                int servedID = -polycarpPQ.top().second;
                cout << servedID << " ";
                served[servedID] = true; // Mark as served
                polycarpPQ.pop();
            }
        }
    }

    return 0;
}
