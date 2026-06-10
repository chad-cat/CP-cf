#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
        }

        int cnt1 = 0;
        for (int i = 0; i < 2 * n; ++i) {
            cnt1 += a[i]; 
        }

        cout << (cnt1 & 1) << " " << min(cnt1, 2 * n - cnt1) << '\n';
    }

    return 0;
}
