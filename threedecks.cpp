#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        double n=(a+b+c)/3.0;
        if(n==(int)n&&(abs(n-a)+abs(n-b))==abs(c-n)){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}