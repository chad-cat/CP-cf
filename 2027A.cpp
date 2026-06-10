#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h[n],w[n];
        int hmax=0;
        int wmax=0;
        for(int i=0;i<n;i++) cin>>h[i]>>w[i];
        for(int i=0;i<n;i++) {
            hmax=max(h[i],hmax);
            wmax=max(w[i],wmax);
        }
        cout<<(hmax+wmax)*2<<endl;
    }
}
