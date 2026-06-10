#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long rem=n%3;
        if(rem==0) cout<<10*(n/3)<<endl;
        else if(rem==1) cout<<10*(n/3)+3<<endl;
        else cout<<(long long) 10*(n/3)+6<<endl;
    }
}