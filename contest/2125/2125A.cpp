#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string k = "";
        int T = 0, f = 0, n = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'T') T++;
            else if(s[i] == 'F') f++;
            else if(s[i] == 'N') n++;
            else k += s[i];
        }

        for(int i = 0; i < T; i++) cout << "T";
        for(int i = 0; i < f; i++) cout << "F";
        for(int i = 0; i < n; i++) cout << "N";
        cout << k << '\n';
    }
    return 0;
}
