#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n),c(n);
        for(int i=0;i<n;i++){ 
            cin>>a[i]; 
            b[i]=a[i];
            c[i]=a[i];
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end(), greater<int>());
        
        int sum=0;
        for(int i=0;i<n;i++){
        sum+=c[i]-b[i];
        }
        cout<<sum<<endl;
    } 
}