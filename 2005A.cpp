#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        while(s.size() < n) {
            s+="aeiou";
        }
        s.resize(n);
        cout<<s<<endl;
    }
}