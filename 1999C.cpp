#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        vector<int> k(n);
        bool g=false;
        k[0]=a[0];
        for(int i=0;i<n;i++){
            if(k[i]>=s){
             cout<<"YES"<<endl;
              g=true;
             break;
            }
            if(i<n-1) k[i+1]=a[i+1]-b[i];
            
        }
        if(m-b[n-1]>=s&&!g){
            cout<<"YES"<<endl;
            g=true;
        }
        if(!g&&m-b[n-1]<s) cout<<"NO"<<endl;


    }
    
}