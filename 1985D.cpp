#include <iostream>
#include <vector>
using namespace std;

vector<int> topcorner(vector<vector<char>> &a, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#') return {i,j};
        }
    }
    return {-1,-1};
}

vector<int> bottomcorner(vector<vector<char>> &a, int n, int m){
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j]=='#') return {i,j};
        }
    }
    return {-1,-1};
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        vector<int> b = topcorner(a,n,m);
        vector<int> c = bottomcorner(a,n,m);
        cout << (b[0]+c[0])/2 +1 << " " << (b[1]+c[1])/2 +1<< endl;
    }
}
