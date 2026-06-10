#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        if((k-1)%3==0){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}