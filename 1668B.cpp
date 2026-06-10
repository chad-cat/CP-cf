#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        for(int i=1;i<n-1;i++){
            if(sum<m) sum+=max(a[i],a[i+1])+1;
            else {
                cout<<"NO"<<endl;
                 break;}
        }
        sum+=max(a[0],a[n-1])+1;
        sum+=max(a[0],a[1])+1;
        if(sum<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}