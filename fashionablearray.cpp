 
 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minDeletionsToFashionable(vector<int> &a) {
    int n = a.size();
    sort(a.begin(), a.end());
    int minOps = n; // max deletions = all elements

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int mn = a[i];
            int mx = a[j];
            if ((mn + mx) % 2 == 0) {
                int kept = j - i + 1;
                int deletions = n - kept;
                minOps = min(minOps, deletions);
            }
        }
    }
    return minOps;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << minDeletionsToFashionable(a) << endl;
    }
    return 0;
}
