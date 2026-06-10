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
int conti1(string s,int n){
    int m=0,g=0;
    ffor(i,0,n){
        if(s[i]=='1') {
            g++;
            m=max(g,m);
        }
        else g=0;
    }
    return m;
}
void solve() {
    // Your code for a single test case goes here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k=0;
    ffor(i,0,n){
        if(s[i]=='1') k++;
    }
    if(k==2) {
        if(conti1(s,n)==2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else if(k%2!=0) cout<<"NO"<<endl;
    else if(k%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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