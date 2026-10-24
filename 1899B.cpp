#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<numeric>x
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> factors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i)
                factors.push_back(n/i);
        }
    }
    int size=factors.size();
    int maximax=0;
    for(int i=0;i<size;i++){
        int g=0;
        int sum=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int j=0;j<n;j++){
            if(g<factors[i]){
                sum+=a[j];
                maxi=max(sum,maxi);
                mini=min(sum,mini);
                g++;
            }
            else{
                g=0;
                sum=0;
            }
        }
        maximax=max(maxi-mini,maximax);
    }
    cout<<maximax<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}