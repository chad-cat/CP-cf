#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll l, r;
        cin >> l >> r;
        ll odds = (r - l + 1) - ((r/2) - ((l-1)/2));
        cout << odds / 2 << "\n";
    }
    return 0;
}