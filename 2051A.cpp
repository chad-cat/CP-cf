#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(n<=a) {cout<<1<<endl;}
        else if(n>a&&n<=a+b) cout<<2<<endl;
        else if(n>a+b&&n<=a+b+c) cout<<3<<endl;
        else if(n>(a+b+c)){
            int d=n%(a+b+c);
            int k=n/(a+b+c);
            if(d==0) cout<<3*k<<endl;
            if(d!=0&&d<=a) cout<<3*k+1<<endl;
            else if(d<=(a+b)&&d>a) cout<<3*k+2<<endl;
            else if(d>(a+b)&&d<=(a+b+c)) cout<<3*k+3<<endl;}
    }
}