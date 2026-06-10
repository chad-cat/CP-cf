#include <iostream>
#include <algorithm>
using namespace std;

long long lcm(long long a, long long b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    long long a[n];
    cin >> n;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    int ans =a[0];
    for (int i = 0; i < n; i++) {
        ans = lcm(ans,a[i+1]);
    }
    for(int i=0;i<n;i++){
        
    }
    }
    
}
 

