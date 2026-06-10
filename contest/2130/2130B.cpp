#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    int sum = 0;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0) cnt0++;
        else if (a[i] == 1) cnt1++;
        else if (a[i] == 2) cnt2++;
    }
    int T = s - sum;
    if (T < 0 || T == 1) {
        bool f= true;

        for (int i = 0; i < cnt0; i++) {
            if (!f) cout << " ";
            cout << 0;
            first = false;
        }

        for (int i = 0; i < cnt2; i++) {
            if (!f) cout << " ";
            cout << 2;
            first = false;
        }

        for (int i = 0; i < cnt1; i++) {
            if (!f) cout << " ";
            cout << 1;
            first = false;
        }
     cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}