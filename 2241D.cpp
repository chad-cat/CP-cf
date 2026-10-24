#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    vector<long long > b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<long long> prefixa(n);
    vector<long long> prefixb(n);
    prefixa[0]=a[0];
    prefixb[0]=b[0];
    for(int i=1;i<n;i++){ 
        prefixa[i]=a[i]+prefixa[i-1];
        prefixb[i]=b[i]+prefixb[i-1];
    }
    for(int i=0;i<n;i++){
        if(prefixa[i]>prefixb[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}