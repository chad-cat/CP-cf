#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int k=a[0];
        for(int i=0;i<n;i++){
        if(k>a[i+1]) k=a[i+1];
        else k=a[i];
        b[i]=k;
        }
        for(int i=0;i<n;i++){
        if(k>a[i+1]) k=a[i];
        else k=a[i+1];
        c[i]=k;
        }
        int sum=0;
        for(int i=0;i<n;i++){
        sum+=c[i]-b[i];
        }
        cout<<sum<<endl;
    } 
}