#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>> a(n, vector<char>(4));
        for(int i=0;i<n;i++) {
            for(int j=0;j<4;j++) {
                cin>> a[i][j];
            }
        }
        vector<int> k;
        for(int i=0;i<n;i++) {
            for(int j=0;j<4;j++) {
                if(a[i][j] == '#') {
                k.push_back(j);
                }
            }
        }
        for(int i=k.size()-1;i>=0;i--) {
            cout<<k[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}