#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        cout<<(n-r)*(2*m-1)+(m-c)<<endl;
        
    }
}
