#include<iostream>
#include<vector>    
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int hash[10]={};
        bool f=0;
       for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        hash[d]++;
       if(hash[0]>=3&&hash[1]>=1&&hash[2]>=2&&hash[3]>=1&&hash[5]>=1&&!f){
       cout<<i+1<<endl;
       f=1; }   } 
        if(!f) cout<<0<<endl;
}
}


