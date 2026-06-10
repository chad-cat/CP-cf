#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;   
    while (t--) {
        int n;
        cin>>n;
        int k=0;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            if(abs(a[i])>abs(a[0])){
                k++;
            }
        }
        if(n%2==0){
            if(k>=n/2-1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(k>=n/2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
