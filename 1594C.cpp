#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        string s;

        cin >> n >> c;
        cin >> s;
        bool allSame = true;

        for (char ch : s) {
            if (ch != c) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << 0 << "\n";
            continue;
        }

        bool found = false;

        for (int i = 1; i <= n; i++) {

            bool good = true;
            for (int pos = i; pos <= n; pos += i) {
                if (s[pos - 1] != c) {
                    good = false;
                    break;
                }
            }

            if (good) {
                cout << 1 << "\n";
                cout << i << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << 2 << "\n";
            cout << n << " " << n - 1 << "\n";
        }
    }

    return 0;
}