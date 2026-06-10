#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                k++;
            }
        }
        cout<<k<<endl;
    }
}