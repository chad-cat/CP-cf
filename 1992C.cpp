#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v;
        for(int i=n;i>m;i--) v.push_back(i);
        for(int i=1;i<=m;i++) v.push_back(i);
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}