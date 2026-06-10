#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long s=0;
        for(int i=0;i<n;i++){
        if(i%2==0) s+=a[i];
        else s-=a[i];
    }
    cout<<s<<endl;
}
}