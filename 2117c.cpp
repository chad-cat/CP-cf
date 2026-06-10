#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n,k=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(a[i]==a[i+j]){
                    k++;
                    break;
                }
            }
        }
        cout<<k<<endl;


    }
}