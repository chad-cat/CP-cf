#include <iostream>
using namespace std; 
int main() {
    int t;
    cin >> t;   
    while (t--) {
        int n,k;
        bool d=false;
        cin >>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
        if(k==0&&s[s.size()-i]>s[i]&&s.size()!=1){
            d=true;
            break;
        }
    }
    if(d){
        cout << "YES" << endl;
    }
    if(k>=1)
    for(int i=0;i<n;i++){
        if(s[n-i]!=s[i]){
            cout<<"YES"<<endl;
            break;
        }
    }
    else cout<<"NO"<<endl;
}
}





