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
    
    vector<long long> counts(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val <= n) {
            counts[val]++;
        }
    }

    vector<long long> diff(n + 2, 0);

    for (int m = 0; m <= n; ++m) {
        long long min_k = counts[m];
        long long max_k = n - m;

        if (min_k <= max_k) {
            diff[min_k]++;
            if (max_k + 1 <= n) {
                diff[max_k + 1]--;
            }
        }

        if (counts[m] == 0) {
            break;
        }
    }

    long long current_count = 0;
    for (int k = 0; k <= n; ++k) {
        current_count += diff[k];
        cout << current_count << " ";
    }
    cout << endl;
    }
    
    return 0;
}
