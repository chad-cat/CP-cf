#include <iostream>
using namespace std;

void alarm(int N,int X,int A[])
{
    int k=0;
    int g=0;
    for(int i=N-1;i>=0;i--){
        if(A[i]==0)
        {k++;
        }
    else{
        break;}}
    for(int i=0;i<=N-1;i++){
        if(A[i]==1){
             g=i;
            break;
        }
    }
    if(X>=(N-k-g)){
    cout<<"YES";}
    else{
    cout<<"NO";}
    cout<<endl;
}
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
    cin>>n>>x;
    int a[n-1];
    
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    alarm(n,x,a);
}
}