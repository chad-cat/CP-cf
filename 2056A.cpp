#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x[n],y[n];
        int sx=0,sy=0;
        for(int i=1;i<=n;i++){
            cin>>x[i]>>y[i];
            sx+=x[i];
            sy+=y[i];
        }
        sx-=x[1];
        sy-=y[1];
        cout<<4*m+2*(sx+sy)<<endl;

    }

}