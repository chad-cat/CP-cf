#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=0;
        vector<int> a(n);
        int odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                k=1;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                odd++;
            }
        }
        if(k){
            cout<<odd+1<<endl;
        }
        else{
            cout<<odd-1<<endl;
        }}
    }
