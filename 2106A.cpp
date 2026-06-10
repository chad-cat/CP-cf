#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >>n>>x;
        if(n>1&&n!=x) {
        for(int i = 0; i <x; i++) {
            cout<<i<<" ";
        }
        for(int i = x+1; i < n; i++) {
            cout<<i<<" ";
        }  
        cout<<x<<endl;

        }
        else if(n==x&&n!=1) {
        for(int i = 0; i < n; i++) {
            cout<<i<<" ";
        }
         cout<<endl;}
        else cout<<0<<endl;
    
}
}