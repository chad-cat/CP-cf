#include <iostream>
#include <vector>

using namespace std;
using ll = long long;
 
int main(){
 

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        ll px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        vector<ll> a(n);
        ll s = 0, m = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i];
            m = max(m, a[i]);
        }
         
        ll L = max(0LL, 2*m - s);
       
        ll dx = qx - px;
        ll dy = qy - py;
        ll dis = dx*dx + dy*dy;
         
        bool ok = (dis <= s*s) && (dis >= L*L);
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}