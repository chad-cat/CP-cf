#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> m(n);
        int k=0;
        for(int i=0;i<n;i++) m[i]=i+1;
        for(int i=0;i<n-1;i++){
            if(a[i]==m[i]||k==1){
                a[i]=a[i]^a[i+1];
                a[i+1]=a[i]^a[i+1];
                a[i]=a[i+1]^a[i];
                k=1;
            }
            else {
                a[i]=m[i];
                k=0;
            } 

        }
        
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}