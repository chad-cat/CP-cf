#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k = 0;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto& p : m) {
            k += p.second / 2;
        }
        cout << k << endl;
    }
}
