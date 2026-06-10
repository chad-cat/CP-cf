#include <iostream>
using namespace std;
int maxfreq
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxi=maxfreq(a,n)*2;
        while(maxi<=n){
            if(n-maxi>maxi) maxi+=maxi;
            else maxi++;
        }
        cout<<maxi<<endl;
    }
}