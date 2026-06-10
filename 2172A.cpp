#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
       vector<int> a(3);
       for(int i=0;i<3;i++) cin>>a[i];
       sort(a.begin(),a.end());
        if(max(a[0],max(a[1],a[2]))-min(a[0],min(a[1],a[2]))<10){
            cout<<"final "<<a[1]<<endl;
        }
        else cout<<"check again"<<endl;
}