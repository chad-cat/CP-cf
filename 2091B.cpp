#include<iostream>
#include<vector>    
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int k=0;
        vector<int> a(n);
       for(int i = 0; i < n; ++i) cin >> a[i];
       sort(a.rbegin(),a.rend());
       int cnt=1;
       for(int i=0;i<n;i++,cnt++) if(a[i]*cnt>=x) {k++; cnt=0;}
        cout<<k<<endl;
    }
}