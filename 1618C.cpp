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

    using namespace std;
//     void solve(){
//         int n;
//         cin>>n;
//         vector<long long> a(n+2,0);
        
//         for(int i=0;i<n;i++) cin>>a[i];
//         long long m=a[0];
//         long long  k=a[1]; 
//         for (int i = 0; i < n; i++) {
//         if (i % 2 == 0)
//             m= __gcd(m, a[i]);
//         else
//             k = __gcd(k, a[i]);
//     }
//         int odd=1,even=1;
//         for(int i=0;i<n;i+=2){
//             if(a[i]%k==0){
//                 even=0;
//                 break;
//             }
//         }
//         for(int i=1;i<n;i+=2){
//             if(a[i]%m==0){
//                 odd=0;
//                 break;
//             }

//         }
//         if(odd) {
//             cout<<m<<endl;
//         }
//         else if(even){
//             cout<<k<<endl;
//         }
//         else{
//             cout<<0<<endl;
//         }
// }
//     int main(){
//         int t;
//         cin>>t;
//         while(t--){
//             solve();
//         }
//         return 0;

//     }

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n=val.size();
        double maxi=0;
    for(int i=0;i<n;i++){
        if(capacity<=0) break;
        double f=capacity/wt[i];
        if(f>1){
            maxi+=(double)val[i];
        }
        else maxi+=((double)val[i])*f;
        
        capacity-=wt[i];
    } 
    return maxi;
    }
};
int main(){
    vector<int> val={60,100,120};
    vector<int> wt={10,20,30};
    int capacity=50; 
    int n=val.size();
        double maxi=0;
    for(int i=0;i<n;i++){
        if(capacity<0) break;
        double f=(double) capacity/wt[i]; 
        cout<<f<<endl;
        if(f>1){
            maxi+=(double)val[i]; 
        }
        else { 
            maxi+=((double)val[i])*f; 
        }
        capacity-=wt[i]; 
    } 
    cout<<maxi<<endl;
    
}
