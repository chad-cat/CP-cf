#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <chrono>
#include<algorithm>
using namespace std;
mt19937 rng((int)chrono::steady_clock::now().time_since_epoch().count()); 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         while(1) {
        int g=uniform_int_distribution<int>(2,n-2)(rng);
        int l=n-g-1;
        if(g != l && g != 1 && l != 1 && __gcd(g, l) == 1){
            cout<<g<<" "<<l<<" "<<1<<endl;
            break;
        }
    }
    }
}