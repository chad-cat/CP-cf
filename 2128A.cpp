#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> bags(n);
        for (int i = 0; i < n; i++) {
            cin >> bags[i];
        }
        int saved=0;

        sort(bags.rbegin(), bags.rend()); 
        for(int i = 0; i < n; i++) {
            int value = bags[i];
        if (value * (1LL << saved) <= c) {
                saved++;
            }
        }

        cout <<n-saved << "\n";
    }

    return 0;
}
