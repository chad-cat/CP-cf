#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<ll> a(4);
        set<ll> st;
        for(int i = 0; i < 4; i++){
            cin >> a[i];
        }
        st.insert(a[0] + a[1]);
        st.insert(a[2] - a[1]);
        st.insert(a[3] - a[2]);
        cout << 4 - st.size() << endl;
    }
}
