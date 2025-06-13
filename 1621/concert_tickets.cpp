#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset<int> tickets; // to store all ticket prices (can have duplicates)
    vector<int> customers(m); // store max price each customer will pay

    // Read ticket prices
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price); // insert into multiset
    }

    // Read customers' max price
    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }

    // Process each customer
    for (int i = 0; i < m; i++) {
        int t = customers[i];

        // Find first ticket with price > t
        auto it = tickets.upper_bound(t);

        if (it == tickets.begin()) {
            // No ticket ≤ t
            cout << -1 << "\n";
        } else {
            --it; // Move to ticket ≤ t
            cout << *it << "\n";
            tickets.erase(it); // Remove it from available tickets
        }
    }

    return 0;
}
