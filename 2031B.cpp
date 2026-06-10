#include <iostream>
#include <vector>
#include <string>
#include<cmath>
using namespace std;
string chad_cat(vector<int> &a, int n){
    for(int i=0;i<n-2;i++){
        if(abs(a[i+1]-a[i])==1||abs(a[i+2]-a[i+1])==1){
        if(a[i]>max(a[i+1],a[i+2])) return"NO"; break;}
        else return "NO"; break;
    }
    return "YES";
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int > a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<chad_cat(a,n)<<endl; 
}
}