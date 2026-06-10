#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> m; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }

        int g = 0, s = 0;
        for (int i = 0; i < n; i++) {
            if (m[a[i]] == 1) g++;
            else s += m[a[i]];
        }

        cout << g / 2 + s / 2 + 2 << endl;
    }
}
