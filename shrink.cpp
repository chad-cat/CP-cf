#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
    vector<int> result;
    
 
    for (int i = 2; i <= n; i += 2)
        result.push_back(i);
 
    int start = (n % 2 == 0) ? n - 1 : n;
    for (int i = start; i >= 1; i -= 2)
        result.push_back(i);
    
    
    for (int num : result)
        cout << num << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
