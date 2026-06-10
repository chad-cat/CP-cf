#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n*n);
        for (int i = 0; i < n*n; i++) cin>>a[i];
        for (int i = 0; i < n*2; i++) cout<<i<<" ";
        cout<<endl;
    }
}