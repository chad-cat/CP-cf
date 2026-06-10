#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        //maximum buses
        if(n%2!=0||n==2) cout<<-1<<endl;
        else{
        long long maxbus=n/4;
        long long minbus=(n+5)/6;
        
        cout<<minbus<<" "<<maxbus<<endl;
    }
    }
}