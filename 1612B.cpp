#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b; 
        cin >> n>>a>>b;
        if(a<=n/2& &b>n/2){
            cout<<a<<" ";
            for(int i=n/2+1;i<=n;i++){
                if(i!= b) cout<<i<<" ";
            }
            for(int i=1;i<=n/2;i++){
                if(i!= a) cout<<i<<" ";
            }
            cout<<b;
            cout<<endl;
        }
        else if(a==n/2+1&&b==n/2){
            for(int i=n/2+1;i<=n;i++){
                if(i!= b) cout<<i<<" ";
            }
            for(int i=1;i<=n/2;i++){
                if(i!= a) cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout <<-1<< endl;
        }
    }
}