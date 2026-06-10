#include <iostream>
using namespace std;
//average of whole array doesnt change
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int  s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s==x*n) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
