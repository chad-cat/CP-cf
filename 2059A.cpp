#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;cin>>n;
    int a[n],b[n];
    set<int> sa,sb;
    for(int i=1;i<=n;i++)cin>>a[i],sa.insert(a[i]);
    for(int i=1;i<=n;i++)cin>>b[i],sb.insert(b[i]);
    if(sa.size()+sb.size()<4){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}}