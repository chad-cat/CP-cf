#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                 m++;
                cout<<1<<endl;
                break;
            }
        }
        if(m==0){
            cout<<s.length()<<endl;
        }
    }
}