#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max_count = 1, current_count = 1;

    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }
        max_count = max(max_count, current_count);
    }

    cout << max_count << endl;
    return 0;
}