#include <bits/stdc++.h>
using namespace std;

vector<int> bfs_on_inverse_graph(auto &ban, int start, int base = 0) {
    int N = ssize(ban);
    vector<int> dis(N, -1); dis[start] = 0;
    vector<int> unvisited;
    for (int i = base; i < N; ++i) {
        if (i != start) unvisited.emplace_back(i);
    }
    deque<int> que{start};
    vector<bool> tmp_ban(N, false);
    while (!que.empty()) {
        int now = que[0]; que.pf();
        for (int x : ban[now]) tmp_ban[x] = true;
        vector<int> tmp_vis;
        for (int x : unvisited) {
            if (!tmp_ban[x]) {
                tmp_vis.emplace_back(x), que.emplace_back(x);
                dis[x] = dis[now] + 1;
            }
        }
        tmp_vis.emplace_back(N); /// INF
        vector<int> tmp_uvis;
        for (int i = 0; int x : tmp_vis) {
            while (i < ssize(unvisited) and unvisited[i] < x) {
                tmp_uvis.emplace_back(unvisited[i++]);
            }
            ++i;
        }
        tmp_uvis.swap(unvisited);
        for (int x : ban[now]) tmp_ban[x] = false;
    }
    return dis;
}
