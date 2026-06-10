#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,k;
cin>>a>>b>>k;
 
    int g=__gcd(a,b);
    a/=g;
    b/=g;
    if(max(a,b)<=k){
        cout<<"1\n";
    }
    else{
        cout<<"2\n";
    }
}
}
 