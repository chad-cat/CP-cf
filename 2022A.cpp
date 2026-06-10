#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int a[n];
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];//total no. of members
            sum2+=a[i]%2;//no. of unpaired members
            sum3+=a[i]/2;//no. of paired members
        }
        if(sum1==2*r) cout<<2*sum3<<endl;//only the members which are are paired are happy
        else if(sum1<2*r){
            int m=2*r-sum1;//no. fo vacant seats
            int k=sum2;//no. of unhappy members
            if(m>=2*k) cout<<sum1<<endl;//if vacant seats are two times the unpaired members then all members will be happy
            else cout<<2*sum3+m<<endl;//if 2 timees vacant seats are less then no. of unpaired members then no. of paired members + the people sitting next to vacant seat will be happyi.e. no. of vacant seats
        }
    }
}