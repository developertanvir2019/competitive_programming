#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k; // Number of shelves and bottles

        unordered_map<int, vector<int>> brandCostMap;

        // Read each bottle's brand and cost
        for (int i = 0; i < k; ++i) {
            int brand, cost;
            cin >> brand >> cost;
            brandCostMap[brand].push_back(cost);
        }

        vector<int> maxEarningsPerBrand;

        // For each brand, calculate the potential earnings
        for (auto& [brand, costs] : brandCostMap) {
            // Sort costs in descending order to get the most expensive ones first
            sort(costs.begin(), costs.end(), greater<int>());

            int total = 0;
            for (int i = 0; i < min((int)costs.size(), n); ++i) {
                total += costs[i]; // Sum up the top costs
            }
            maxEarningsPerBrand.push_back(total);
        }

        // Sort the earnings in descending order and pick the top `n` values
        sort(maxEarningsPerBrand.begin(), maxEarningsPerBrand.end(), greater<int>());

        int maxEarnings = 0;
        for (int i = 0; i < min((int)maxEarningsPerBrand.size(), n); ++i) {
            maxEarnings += maxEarningsPerBrand[i];
        }

        cout << maxEarnings << endl;
    }

    return 0;
}