#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long k=l;
        int i=1;
        while(k<=r){
            k+=i;
            i++;
        }
        cout<<i-1<<endl;
    }
}