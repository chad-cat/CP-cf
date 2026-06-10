#include <iostream>
using namespace std;

char calculate(char a, char b) {
    if (a < b) return '<';
    if (a == b) return '=';
    return '>';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char a = s[0], b = s[2], op = s[1];

        bool val=(op=='<'&&a<b)||(op=='='&&a==b)||(op=='>'&&a>b);
        if (val) {
            cout << s << '\n';
            continue;
        }
        char correct = calculate(a, b);
        cout << a << correct<< b << '\n';
    }
    return 0;
}
