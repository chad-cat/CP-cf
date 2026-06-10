#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int search(int a){
    int k=0;
    int l=0,h=99;
        while(l<=h){
            int mid=(l+h)/2;
            if(a<mid*mid){
                h=mid-1;
            }
            else if(a>mid*mid){
                l=mid+1;
            }6
            else if(a==mid*mid){
                return 1;
                break;
            }  
        }
        return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i]; 
        int m=0;
        for(int i=0;i<n;i++){
        m+=search(a[i]);
        }
        cout<<m<<endl;
}
}