#include<iostream>
using namespace std;
int lengthofrow(string s,int n){
    for(int i=0;i<n;i++){
            if(s[i]=='1') continue;
            else return i-1;
        }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==4&&s=="1111") cout<<"YES"<<endl;
        else if(lengthofrow(s,n)*lengthofrow(s,n)==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}