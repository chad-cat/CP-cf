#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long waiting = 0; 
    for(int i = 0; i < n; i++){
        char type;
        long long x;
        cin >> type >> x;
        if(type == 'P'){
           
            waiting += x;
        }
        else if(type == 'B'){
           
            if(x > waiting){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            waiting = max(waiting - x, 0LL);
        }
    }

    return 0;
}
