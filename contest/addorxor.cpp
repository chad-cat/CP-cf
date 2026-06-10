
#include <iostream>
using namespace std;
using ll = long long;
static const ll INF = (1LL<<60);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int a, b;
        ll x, y;
        cin >> a >> b >> x >> y;

        // we'll search states in [0 .. M], where M covers both a and b
        int M = max(a, b) + 2;

        // distance array
        vector<ll> dist(M+1, INF);
        dist[a] = 0;

        // min-heap for Dijkstra
        priority_queue<pair<ll,int>,
                       vector<pair<ll,int>>,
                       greater<pair<ll,int>>> pq;
        pq.push({0, a});

        while(!pq.empty()){
            auto [cd, u] = pq.top();
            pq.pop();
            if(cd > dist[u]) continue;
            if(u == b) break;  // we found the best for b

            // 1) increment by 1: u -> u+1 at cost x
            if(u + 1 <= M){
                ll nd = cd + x;
                if(nd < dist[u+1]){
                    dist[u+1] = nd;
                    pq.push({nd, u+1});
                }
            }
            // 2) XOR with 1: toggle LSB
            int v = u ^ 1;  // toggles bit0
            if(v >= 0 && v <= M){
                ll nd = cd + y;
                if(nd < dist[v]){
                    dist[v] = nd;
                    pq.push({nd, v});
                }
            }
        }

        ll ans = dist[b];
        cout << (ans == INF ? -1 : ans) << "\n";
    }

    return 0;
}