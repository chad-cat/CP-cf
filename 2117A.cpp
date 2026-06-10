#include <iostream> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int k=0;
        int g=0;
        for(int i=0;i<n;i++) 
        cin>>a[i];

        for(int i=n-1;i>=0;i--){
        if(a[i]==0) 
        {g++;} 
        else{
        break;}}

        for(int i=0;i<=n-1;i++) {
            if(a[i]==1) 
            {k=i; 
            break;}}

        if(x>=(n-k-g)) {cout<<"YES\n";}
        else {cout<<"NO\n";}
    }
}