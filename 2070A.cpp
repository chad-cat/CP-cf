#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = 3 * (n / 15);
        n %= 15;

        for (int j = 0; j <= n; ++j) {
            if (j % 3 == j % 5) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
