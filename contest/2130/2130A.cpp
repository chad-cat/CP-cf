#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
    cin >> n;
    vector<int> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<int> freq(55, 0);
    for (int x : s) {
        freq[x]++;
    }

    int ans = 0;

    
    int c2 = min(freq[0], freq[1]);
    ans += c2 * 2;
    freq[0] -= c2;
    freq[1] -= c2;

    int c1 = freq[0];
    ans += c1;
    freq[0] = 0;
    for (int i = 0; i < 55; i++) {
        if (freq[i] > 0) {
            ans += i * freq[i];
        }
    }

    cout <<ans<< endl;
    }

 return 0;
}