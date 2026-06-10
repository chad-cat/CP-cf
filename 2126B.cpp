#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int hike=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                hike+=(c+1)/(k+1);
                c=0;//refresh the count for new block
                continue;
            }
            else c++;     
         } 
         hike+=(c+1)/(k+1);//because last 1 the hike arent counted 
         cout<<hike<<endl;  
}
}