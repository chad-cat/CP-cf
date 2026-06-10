#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void solve() {
    std::string s, t;
    std::cin >> s >> t;

    std::map<char, int> s_counts, t_counts;
    for (char c : s) {
        s_counts[c]++;
    }
    for (char c : t) {
        t_counts[c]++;
    }
    for (char c = 'A'; c <= 'Z'; ++c) {
        if (s_counts[c] < t_counts[c]) {
        cout << "NO\n";
            return;
        }
    }
    string result = "";
    map<char, int> needed = t_counts;

    for (int i = s.length() - 1; i >= 0; --i) {
        char current_char = s[i];
        if (needed[current_char] > 0) {
            result += current_char;
            needed[current_char]--;
        }
    }
    reverse(result.begin(), result.end());

    if (result == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}