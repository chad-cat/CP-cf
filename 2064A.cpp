#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int k=0,g=0;
        if(s.back()=='0'){
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'&&s[i-1]=='1'||s[i]=='0'&&s[0]==0){
                k++;
            }}
            cout<<(k-1)*2<<endl;
        }
        else if(s.back()=='1'){
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'&&s[i-1]=='1'||s[i]=='0'&&s[0]==0){
                g++;
            }
        }
        cout<<(g*2)-1<<endl;
    }
    }
}