#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int f=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            f+=abs(n-i*2+1);
        }
        cout<<f/2+1<<endl;
    }
}