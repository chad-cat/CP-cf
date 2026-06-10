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
#define fr(i,n)     for(ll i = n - 1; i >= 0; i--)
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
 void solve() {
    int n;
    cin >> n;
    vl a(n), b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    set<ll> setmp1, setmp2;
    set<ll> g, k;

    f(i,0,n) {
        f(j,i,n) {
            if (a[i] > a[j]) {
                setmp1.insert(a[i]);
                setmp1.insert(a[j]);
            } else {
                k.insert(i);
            }
        }
    }

    f(i,0,n) {
        f(j,i,n) {
            if (b[i] > b[j]) {
                setmp2.insert(b[i]);
                setmp2.insert(b[j]);
            } else {
                g.insert(i);
            }
        }
    }

    // convert sets to vectors for indexing
    vector<ll> v1(setmp1.begin(), setmp1.end());
    vector<ll> v2(setmp2.begin(), setmp2.end());

    int m1 = 0, m2 = 0;

    f(i,0,n) {
        if (k.find(i) != k.end()) {
            cout << a[i] << " ";
        } else {
            if (m1 < (int)v1.size()) cout << v1[m1++] << " ";
        }
    }
    cout << "\n";

    f(i,0,n) {
        if (g.find(i) != g.end()) {
            cout << b[i] << " ";
        } else {
            if (m2 < (int)v2.size()) cout << v2[m2++] << " ";
        }
    }
    cout << "\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
}
