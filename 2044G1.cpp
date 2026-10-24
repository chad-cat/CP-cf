
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> r(n);

    for (int i = 0; i < n; i++) {
        cin >> r[i];
        r[i]--;
    }

    vector<int> indegree(n, 0);

    for (int i = 0; i < n; i++) {
        indegree[r[i]]++;
    }

    queue<int> q;
    vector<int> dist(n, 1);

    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    int ans = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        ans = max(ans, dist[u]);

        int v = r[u];

        dist[v] = max(dist[v], dist[u] + 1);

        indegree[v]--;

        if (indegree[v] == 0) {
            q.push(v);
        }
    }

    cout << ans + 2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
