#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <numeric>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (auto &v : a) cin >> v;

    sort(a.begin(), a.end());

    long long sum = accumulate(a.begin(), a.end(), 0LL);
    long long prevDay = -1;
    long long ans = 0;

    for (int i = n - 1; i >= 0; i--) {

        long long curDay;
        
        if (x - sum >= 0)
            curDay = (x - sum) / (i + 1);
        else
            curDay = -1;

        ans += (i + 1) * (curDay - prevDay);

        prevDay = curDay;
        sum -= a[i];
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}





