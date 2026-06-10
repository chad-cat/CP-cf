#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        long long g=__gcd(a,b);
        long long maxi=max(a/g,b/g);
        if(maxi<=k) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
