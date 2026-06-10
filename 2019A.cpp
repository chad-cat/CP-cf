#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum=0;
        int max=0;
        int k=0,g=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
         for(int i=0;i<n;i++){
            if(max<a[i]){
                max=a[i];
                k=i;
            }
        if(a[i]<max1<max){max1=a[i]; g=i;}
    }
         if(n%2==0&&k%2==0) cout<<n/2+a[k]<<endl;
        else if(n%2!=0&&k%2!=0) cout<<n/2+a[k]+1<<endl;
        else 
    }
}
