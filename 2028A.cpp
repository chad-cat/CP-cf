#include <iostream>
#include <string>
using namespace std;
string chad_cat(string &s, int n,int a,int b) {
    int x = 0, y = 0;
        for(int i=0; i<n; i++) {
        if(x==a&&y==b) {return "YES";}
        if(s[i]=='N') y++;
        else if(s[i]=='S') y--;
        else if(s[i]=='E') x++;
        else if(s[i]=='W') x--;
        }
        if(x>=1&&y>=1){
            while(x<=a&&y<=b) {
            if(x==a&&y==b) return "YES";
            x+=x;
            y+=y;
        }
    return "NO";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n>>a>>b;
        string s;
        cin>>s;
        cout<<chad_cat(s,n,a,b) << endl;
    }
}