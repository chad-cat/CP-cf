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
#include <chrono>
#include <random>
#include <climits>

// For including everything (though it can increase compile time)
// #include <bits/stdc++.h>

using namespace std;

// Type Aliases for convenience
 
#define ll  long long int
#define ld  long double
#define vl  vector<ll>
#define vvl vector<vl>
#define vpr vector<pr>
#define vs  vector<string>
#define pr  pair<ll,ll>
#define mset multiset
#define umap unordered_map
#define uset unordered_set
#define pus push_back
#define in insert
#define ff first
#define ss second
 
static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ost tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fbo(n) find_by_order(n)  // kth element
#define ook(n) order_of_key(n)   // count of < n
 
#define i(n)        ll n; cin >> n
#define str(str)    string str; cin >> str;
#define sz(x)       (ll)(x).size()
#define all(x)      x.begin(), x.end()
#define srt(x)      sort(all(x))
#define srtr(x)     sort(all(x), greater<>())
#define rev(x)      reverse(x.begin(), x.end())
#define nextP(x)    next_permutation(all(x))
#define Vmin(x)     *min_element(all(x))
#define Vmax(x)     *max_element(all(x))
#define Vsum(x)     accumulate(all(x), 0ll)
#define lowB(x,n)   (lower_bound(all(x),n) - (x).begin())
#define upB(x,n)    (upper_bound(all(x),n) - (x).begin())
#define cnt(x,n)    count(all(x), n)
 
#define f(i,a,n)      for(ll i = a; i < n; i++)
#define fr(i,n,a)     for(ll i = n - 1; i >= a; --i)
#define f1(i,n)     for(ll i = 1; i < n; i++)
#define fl(x,y,z)   for(ll x = y; x <= z; x++)
 
// #define nl          cout << "\n"
// #define endl        "\n"
// #define ya          cout << "YES"
// #define na          cout << "NO"
// #define prsn(n)     fixed << setprecision(n)
// #define input(v)    f(i, sz(v)) cin >> v[i]

// Constants
const int MOD = 1e9 + 7; // A common prime modulus for modular arithmetic
const int INF = 1e9;      // A large integer value representing infinity
const ll LINF = 1e18;     // A large long long value representing infinity

// ------------------------------ Main Function ------------------------------------------
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        if (k == n - 1) {            // all chars equal => unbalanced
            printf("-1\n");
            continue;
        }

        long long B   = n - k;       // number of blocks
        long long nz0 = (B + 1) / 2; // zero-blocks (start with '0')
        long long nz1 = B / 2;       // one-blocks
        long long S0  = (n + 1) / 2; // total zeros (ceil)
        long long S1  = n / 2;       // total ones  (floor)
        long long extra0 = S0 - nz0; // leftover to stuff into first 0-block
        long long extra1 = S1 - nz1; // leftover to stuff into first 1-block

        string s;
        s.reserve(n);
        long long i0 = 0, i1 = 0;
        for (long long b = 0; b < B; b++) {
            if (b % 2 == 0) {                 // zero-block
                long long len = 1 + (i0 == 0 ? extra0 : 0);
                i0++;
                s.append(len, '0');
            } else {                          // one-block
                long long len = 1 + (i1 == 0 ? extra1 : 0);
                i1++;
                s.append(len, '1');
            }
        }
        printf("%s\n", s.c_str());
    }
    return 0;
} 