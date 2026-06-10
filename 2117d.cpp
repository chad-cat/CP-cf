#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n>=3){
        for(int i=0;i<n-2;i++){
            if((a[i]+a[i+2])==a[i+1]*2){
                k++;
            }
        }
        if(k==n-2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else if(n<3){
        if(a[0]<a[1]){
            if(abs(2*a[0]-a[1])==3){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else
        if(abs(2*a[1]-a[0])==3) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
}