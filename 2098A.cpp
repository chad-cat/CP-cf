#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        // Find minimum digit
        char minDigit = *min_element(s.begin(), s.end());

        vector<char> k, b;

        for(char ch : s) {
            if(ch == minDigit)
                k.push_back(ch);
            else
                b.push_back(ch);
        }

        sort(b.rbegin(), b.rend());
        sort(k.rbegin(), k.rend());

        for(char ch : b) cout << ch;
        cout << minDigit;
        for(char ch : k) cout << ch;
        cout << "\n";
    }
}
