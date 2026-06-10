#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        int d=0,k=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            d+=s[i];
            if(s[i]==0) k++;
        }
        cout<<k+d<<endl;

    }
}