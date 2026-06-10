#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>

// For including everything (though it can increase compile time)
// #include <bits/stdc++.h>

using namespace std;

// Type Aliases for convenience
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// Macros for cleaner code
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define for_each(a, b) for(auto& a : b)
#define F first
#define S second
#define ffor(i,a,b) for(int i=a;i<b;i++)

// Constants
const int MOD = 1e9 + 7; // A common prime modulus for modular arithmetic
const int INF = 1e9;      // A large integer value representing infinity
const ll LINF = 1e18;     // A large long long value representing infinity

// ------------------------------ Main Function ------------------------------------------
void solve() {
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vll m(n);
    ffor(i, 0, n) cin >> m[i];

    ll k = min(m[0] * a, b);  // first message cost

    ffor(i, 0, n - 1) {
        ll diff = m[i + 1] - m[i];
        k += min(diff * a, b);  // each gap cost
    }

    if (k < f ) cout << "YES\n";
    else cout << "NO\n";
}


//------------------------------------------------------------------------------------------

int main() {
    // Speeds up input/output operations
    fast_io;

    // Handling multiple test cases
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    // For a single test case, you can just call solve() directly
    // solve();

    return 0;
}