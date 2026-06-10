#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=0;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                k++;
                i++;
            }
        }
        if(k%2==0&&k!=0) cout<<"NO"<<endl;
        else if(k==1&&n==2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}