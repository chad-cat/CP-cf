#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.length() >= 2) {
            s[s.length() - 2] = 'i';
            s[s.length() - 1] = ' ';
        }

        cout << s << endl;
    }
}
