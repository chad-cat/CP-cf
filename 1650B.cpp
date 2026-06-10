#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,a;
        cin>>l>>r>>a;
        if(r%a!=0){
        cout<<(int)(r/a)+(r%a)<<endl;
        }
        else if((a-1)>l) cout<<(int)((a-1)/a)+((a-1)%a)<<endl;
        else cout<<(int)((r-1)/a)+((r-1)%a)<<endl;
    }
}