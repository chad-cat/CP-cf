#include <iostream>
#include <vector>
using namespace std;

void test() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 1;
    int m = n;
    vector<int> a(n);
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            a[i + 1] = l;
            l++;
        }
        if (s[i] == '>') {
            a[i + 1] = m;
            m--;
        }
    }
    a[0] = l;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        test();
    }
    
    return 0;
}