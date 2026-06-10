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
        int k=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int m=a[i];
                for(int j=0;j<a[i];j++){
                    if(m<a[i+1]){
                        break;
                    }
                    else if(m==0){
                        cout<<-1<<endl;
                        break;
                    }
                     m/=2;
                     cout<<m;
                    k++;
                    
                }
                cout<<" ";
            }
        }
        cout<<k<<endl;
    }
}