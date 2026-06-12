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
void solve() {
    // Your code for a single test case goes here
    int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        vector<int> reach(n + 2), cntv(n + 1, 0);
        int j = 0;
        for (int i = 1; i <= n; i++) {
            if (j < i) j = i - 1;
            while (j + 1 <= n && cntv[a[j + 1]] == 0) { j++; cntv[a[j]]++; }
            reach[i] = j;
            cntv[a[i]]--;
        }

        vector<int> minStart(n + 2, 0), maxStart(n + 2, 0);
        vector<int> touched;
        vector<int> dqmin(n + 1), dqmax(n + 1); 

        int best = 0;
        for (int L = n / 2; L >= 1 && best == 0; L--) {
            int hmin = 0, tmin = 0, hmax = 0, tmax = 0;   
            touched.clear();

            for (int p = 0; p <= n; p++) {
                while (tmin > hmin && a[dqmin[tmin - 1]] >= a[p]) tmin--;
                dqmin[tmin++] = p;
                while (tmax > hmax && a[dqmax[tmax - 1]] <= a[p]) tmax--;
                dqmax[tmax++] = p;

                int start = p - L + 1;          
                if (start >= 1) {
                    while (dqmin[hmin] < start) hmin++;  
                    while (dqmax[hmax] < start) hmax++;
                    int wmin = a[dqmin[hmin]];
                    int wmax = a[dqmax[hmax]];

                    
                    if (start + L-1 <= reach[start] && wmax - wmin == L - 1) {
                        int m = wmin;                    
                        if (minStart[m] == 0) {
                            minStart[m] = maxStart[m] = start;
                            touched.push_back(m);
                        } else {
                            minStart[m] = min(minStart[m], start);
                            maxStart[m] = max(maxStart[m], start);
                        }
                    }
                }
            }
            for (int m : touched) {
                int mm = m + L;
                if (mm <= n && minStart[mm] != 0) {
                    if (maxStart[mm] - minStart[m] >= L ||
                        maxStart[m] - minStart[mm] >= L) {
                        best = L;
                        break;
                    }
                }
            }
            for (int m : touched) { minStart[m] = 0; maxStart[m] = 0; }
        }

        cout << best << "\n";
    
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