#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        bool a[n][m];
        for(ll i = 0; i < n; i++){
            string s;
            cin >> s;
            for(ll j = 0; j < m; j++){
                a[i][j] = s[j] - '0';
            }
        }

        int r = 0, c = 0;
        for (ll i = 0; i < n; i++){
            bool sum = 0;
            for (ll j = 0; j < m; j++) sum ^= a[i][j];
            if (sum) r++;
        }

        for (ll j = 0; j < m; j++){
            bool sum = 0;
            for (ll i = 0; i < n; i++) sum ^= a[i][j];
            if (sum) c++;
        }

        cout << max(r, c) << endl;
    }
    return 0;
}
