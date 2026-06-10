#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=-1;
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                c=i;
                break;
            }
        }
        int m=0,g=(c!=-1?a[c]:0);
        for(int i=c+1;i<n;i++){
            if(a[i]==0&&g>0){
                m++;
                g--;
            }
            if(a[i]>=k){
            g+=a[i];}
        }
        cout<<m<<endl;
    }
}