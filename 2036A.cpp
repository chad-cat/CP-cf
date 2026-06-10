#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=0;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])==5||abs(a[i]-a[i+1])==7) k++;
        }
        if(k==n-1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
