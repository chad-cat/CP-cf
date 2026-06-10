#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    bool hasEven = false, hasOdd = false;
    for (int x : a) {
        if (x % 2 == 0) hasEven = true;
        else hasOdd = true;
    }

    if (hasEven && hasOdd) {
        // If both parities present, print sorted array
        sort(a.begin(), a.end());
    }
    // If single parity (only evens or only odds) — keep original order

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

int main() {
    fast_io;
    int t; if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
