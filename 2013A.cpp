#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int s=0;
        if(y<=x){
            s=((n%y)==0?n/y:(n/y)+1);
        }
        else{
            s=((n%x)==0?n/x:(n/x)+1);
        }
        cout<<s<<endl;
        
    }
}