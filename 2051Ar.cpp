#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int sum=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n-1;i++){20
            if(a[i]>b[i+1]) {sum+=a[i]-b[i+1];}
        }
        sum+=a[n-1];
        cout<<sum<<endl;

    }
}