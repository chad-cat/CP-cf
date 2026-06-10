#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h[n];
        map<int,int> mpp;
        for(int i=0;i<n;i++){cin>>h[i]; mpp[h[i]]++;}
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,mpp[h[i]]);
        }
        cout<<n-maxi<<endl;
    }
}