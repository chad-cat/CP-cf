#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=0;
        for(int i=0;i<2;i++){
            if(s[i]>s[i+1]){
                k++;
                break;
            }
        }if(n>3){
        for(int i=2;i<n;i++){
            if(s[i]=='0'){
                k++;
            }
        }
    }
        cout<<k<<endl;
    }
}