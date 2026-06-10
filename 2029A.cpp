// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long k,l,r;
//         cin>>l>>r>>k;
//         long g=0;
//         for(int i=l;i<=r;i++){
//             if(i*k<=r) g++;
//             else break;
//         }
//         cout<<g<<endl;

//     }
// }
//max(r / k - l + 1, 0)
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,l,r;
        cin>>l>>r>>k;
        cout<<max((r/k-l+1),0)<<endl;
        
    } 
}