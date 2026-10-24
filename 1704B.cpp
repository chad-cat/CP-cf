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
const int INF = 1e9;     // A large long long value representing infinity

// ------------------------------ Main Function ------------------------------------------
void solve() {
    // Your code for a single test case goes here
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> ans;
    for(int i=1;i<=n;i++){
        int temp=((l+i-1)/i)*i;
        if(temp<=r){
            ans.push_back(temp);
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    f(i,0,ans.size()){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
class Disjointset{
    public:
    vector<int> rank,size,parent;
    Disjointset(int node){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i;
    }
    int findparent(int oldnode){
        if(oldnode==parent[pldnode]) return oldnode;
        return parent[oldnode]=findparent(parent[oldnode]);
    }
    void unionbysize(int u,int v){
        int parentofu=findparent(u);
        int parent0fv=findparent(v);
        if(parentofu==parentofv) return;
        if(size[parentofu]<size[parentofv]){
            parent[parentofu]=parentofv;
            size[parentofv]+=size[parentofu];
        }
        else{
            parent[parentofv]=parentofu;
            size[parentofu]+=size[parentofv];
        }
    }
    void unionbyrank(int u,int v){(
        int parentofu=findparent(u);
        int parentofv=findparent(v);
        if(rank[parentofu]<rank[parentofv]){
            parent[parentofu]=parentofv;

        }
        else if(rank[parentofv]<rank[parentofu]){
            parent[parentofv]=parentofu;
        }
        else{
            parent[parentofv]=parentofu;
            rank[parentofu]++;1511
        }
    )}
}