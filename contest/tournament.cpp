#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int strength = a[j - 1];   

        vector<int> sorted = a;
        sort(sorted.begin(), sorted.end());

        int maxstrength = sorted[n - k]; 

        if((strength+1) >= maxstrength)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
