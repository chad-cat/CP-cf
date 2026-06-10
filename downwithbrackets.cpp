#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k=0;
        for(int i=0;i<s.length()/2;i++) 
        if(s[i]==')')k++;

        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}