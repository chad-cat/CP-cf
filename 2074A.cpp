#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(l==r&&l==d&&l==u){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}