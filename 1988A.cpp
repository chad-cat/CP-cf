#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=0;
        if(n==1) {
            cout<<0<<endl; 
        }
        else if(n<k&&n!=1){
            cout<<1<<endl;
        }
        else{
            while(n>1){
                    n=n-k+1;
                    x++;
            }
            cout<<x<<endl;
            
            
        }

    }
}
