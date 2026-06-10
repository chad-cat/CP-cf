#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
       vector<int> a(n),b(n);
        int k=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }//b is unsorted original array
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                k++;
            }
        }
        if(k==n){
            cout<<"NO\n";
        }
        else{cout<<"YES\n";
        int d=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                d++;
            }
        }
        cout<<d<<endl;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cout<<b[i]<<" ";
            }
        }
        cout<<endl;}
    }

}