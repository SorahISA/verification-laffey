#define PROBLEM "https://atcoder.jp/contests/abc319/tasks/abc319_g"
#ifdef local
#include "misc/debug.hpp"
#endif
#include "misc/macro.hpp"
#include "graph/bfs_on_inverse_graph.hpp"
#include <bits/stdc++.h>
using namespace std;

const int mod = 998'244'353;

void solve() {
    int N, M; cin >> N >> M;
    
    vector<vector<int>> ban(N);
    for (int i = 0; i < M; ++i) {
        int u, v; cin >> u >> v, --u, --v;
        ban[u].eb(v), ban[v].eb(u);
    }
    
    auto dis = bfs_on_inverse_graph(ban, 0, 0);
    
    if (dis[N-1] == -1) { cout << -1 << "\n"; return; }
    
    vector<vector<int>> lay(dis[N-1] + 1);
    for (int i = 0; i < N; ++i) { if (dis[i] <= dis[N-1] and dis[i] != -1) lay[dis[i]].eb(i); }
    
    vector<int> dp(N, 0); dp[0] = 1;
    for (int l = 1; l <= dis[N-1]; ++l) {
        int sum = 0;
        for (int x : lay[l-1]) sum += dp[x];
        for (int now : lay[l]) {
            dp[now] = sum;
            for (int x : ban[now]) {
                if (dis[x] == l-1) dp[now] -= dp[x];
            }
            dp[now] %= mod;
        }
    }
    cout << dp[N-1] << "\n";
}

int32_t main() {
    fastIO();
    
    int t = 1; // cin >> t;
    for (int _ = 1; _ <= t; ++_) {
        // cout << "Case #" << _ << ": ";
        solve();
    }
    
    return 0;
}
