#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>


using namespace std;

void solve(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> k(n,vector<int>(m));
    vector<long long> sum(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>k[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sort(k[i].rbegin(),k[i].rend());
    }
    int ans=m;
    int vmin=v[0];
    for(int i=0;i<n;i++){
        int z=0;
        vmin=min(v[i],vmin); 
        int r=vmin;
        for(int j=0;j<m;j++){
            if(r-k[i][j]>=0){
                z++;
                r-=k[i][j];
            }
            else {
                break;
            }
        }
        ans=min(ans,z);
    }
    if(ans==0) {
        cout<<1<<endl;
        return;
    }
    cout<<ans<<endl;
    
    // int z=0;
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(v[i]-sum[i]>maxi){
    //         z=i;
    //         maxi=v[i]-sum[i];
    //     }
    // }
    // int x=0;
    // int sumi=0;
    // sort(k[z].rbegin(),k[z].rend());
    // for(int i=0;i<m;i++){
    //     sumi+=k[z][i];
    //     if(sumiv[z]){
    //         x=i+10;
    //         break;
    //     }
    // }
    // cout<<x<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}