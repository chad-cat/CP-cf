#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int maxi = *max_element(a.begin(), a.end());
        int mini = *min_element(a.begin(), a.end());
        int mid = mini+((maxi - mini) / 2.0);

        bool bad = false;
        for (int x : a) {
            if (x == mid) {
                bad = true;
                break;
            }
        }
        if (bad) cout << "NO"<<endl;
        else cout << "YES"<<endl;
    }
    return 0;
}
