#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = "";
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s += to_string(x);  // convert int to string and append
        }

        if (s.find("101") != string::npos) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
