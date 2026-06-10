#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        vector<int> a(n);
        vector<int> m(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){ 
            if(a[i]<a[i+1]){
                m[k]=i+1;
                k++;
            }
            }
            cout<<k<<endl;
            for(int i=0;i<k;i++){
                cout<<m[i]+1<<" ";
            }
            cout<<endl;
    }
}