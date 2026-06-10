// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     int t,x;
     
//     cin>>t;
//     while(t--){
//         int k=3;//note line 12,13
//         cin>>x;
//         if(x==0)
//         cout<<"0"<<endl;
//         else if(x==1)
//         cout<<"3"<<endl;
//         else{
//             int i=0;
//             int arr[]={1,1,2};
//             while(i<k){
//                 int s=1;
//                 int g=2;
//                 if(arr[g]<x){
//                  s = min_element(arr, arr + 3)-arr;
//                  g = max_element(arr, arr + 3)-arr;
//                 arr[s]=arr[g]*2-1;
//                 k++;
//                 }
//                 else
//                 else
//                 break;
//                 i++;
//             }
//             cout<<k+2<<endl;
//         }//add 2 because when greatest no.become equal to x then it require only 2 steps to achieve (x,x,x)
//     }
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k=0;
        int x;
        cin>>x;
        while(x){
            x/=2;
            k++;
        }
        cout<<(2*k+1)<<endl;
    }
}
