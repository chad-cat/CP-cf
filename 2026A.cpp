#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// auto chad_cat(int X,int Y,int k){
//     if(k<x&&k<y){
//         return {"0 0","0 y"};
//         cout<<endl;
//         return {"1 0","x 0"}
//     }}{
    int main(){
        int t;
        cin >> t;
        while (t--) {
            int x,y,k;
            cin >> x >> y >> k;
            if(k <=x && k <=y) {
                cout << "0 0 "<< "0 " << y << endl;
                cout<<"0 0 "<< x << " 0" << endl;    
            }
            
            else {
                int g;
                g=min(x,y);
                cout << "0 0 " << g<<" " << g << endl;
                cout<<g<<" 0 0 " << g << endl;
            }
        }
}