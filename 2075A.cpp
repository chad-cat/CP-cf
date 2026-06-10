#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = 0;

        if (n % 2 == 1) {
            n -= k;
            ans = 1;
        }

        k -= 1;
        if (k > 0)
            ans += (n + k - 1) / k;

        cout << ans << endl;
    }
    return 0;
}
