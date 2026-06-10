#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
         int s=0,rem=0;
        s=min(m,a); rem=m-min(m,a);
        s+=min(m,b);rem+=m-min(m,b);
        s+=min(rem,c);
        cout<<s<<endl;
    }
}
