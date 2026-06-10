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

// --- Main Function ---
void solve() { 
    int n,m;
    cin>>n>>m;
    vector<vi> a(n,vi (2));
    int p=0;
    ffor(i,0,n) cin>>a[i][0]>>a[i][1];
    int k=a[0][1];
    if(k==0){
        if(a[0][0]%2==0) p=a[0][0];
        else p=a[0][0]-1;
    }
    else {
        if(a[0][0]%2==0) p=(a[0][0]-1);
        else p=a[0][0];
    }
    ffor(i,1,n){
        int g=(a[i][0]-a[i-1][0]);
        if(a[i][1]==k){
        if(g%2==0) p+=g;
        else p+=(g-1);
        }
        else {
            if(g%2==0)p+=g-1;
            else p+=g;
        }
        k=a[i][1];
    }
    if(m>a[n-1][0]){
    cout<<p+(m-a[n-1][0])<<endl;}
    else 
    cout<<p<<endl;
}

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