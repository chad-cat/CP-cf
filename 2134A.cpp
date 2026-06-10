#include <iostream>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((n-b)%2!=0){
            cout<<"NO"<<endl;
        }
        if((n-b)%2==0){
        if(b>=a) {
            cout<<"YES"<<endl;
            }
        else if(a>b)
        {
            if((n-a)%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
 }
}