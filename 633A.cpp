#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int x = 0; x <= c / a; x++) {
        int remaining = c - x * a;

        if (remaining % b == 0) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}