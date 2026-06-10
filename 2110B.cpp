#include<iostream>
using namespace std;

string funcn(string s){
    int k=0;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]=='(') k++;
        else k--;
        if(k<0) return "YES";  
    }
    if(k==0) return "NO";
    else return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<funcn(s)<<"\n";
    }
    return 0;
}
