---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: graph/bfs_on_inverse_graph.cpp
    title: graph/bfs_on_inverse_graph.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/bfs_on_inverse_graph.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\nvector<int> bfs_on_inverse_graph(auto &ban, int start,\
    \ int base = 0) {\n    int N = ssize(ban);\n    vector<int> dis(N, -1); dis[start]\
    \ = 0;\n    vector<int> unvisited;\n    for (int i = base; i < N; ++i) {\n   \
    \     if (i != start) unvisited.emplace_back(i);\n    }\n    deque<int> que{start};\n\
    \    vector<bool> tmp_ban(N, false);\n    while (!que.empty()) {\n        int\
    \ now = que[0]; que.pf();\n        for (int x : ban[now]) tmp_ban[x] = true;\n\
    \        vector<int> tmp_vis;\n        for (int x : unvisited) {\n           \
    \ if (!tmp_ban[x]) {\n                tmp_vis.emplace_back(x), que.emplace_back(x);\n\
    \                dis[x] = dis[now] + 1;\n            }\n        }\n        tmp_vis.emplace_back(N);\
    \ /// INF\n        vector<int> tmp_uvis;\n        for (int i = 0; int x : tmp_vis)\
    \ {\n            while (i < ssize(unvisited) and unvisited[i] < x) {\n       \
    \         tmp_uvis.emplace_back(unvisited[i++]);\n            }\n            ++i;\n\
    \        }\n        tmp_uvis.swap(unvisited);\n        for (int x : ban[now])\
    \ tmp_ban[x] = false;\n    }\n    return dis;\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\nvector<int> bfs_on_inverse_graph(auto\
    \ &ban, int start, int base = 0) {\n    int N = ssize(ban);\n    vector<int> dis(N,\
    \ -1); dis[start] = 0;\n    vector<int> unvisited;\n    for (int i = base; i <\
    \ N; ++i) {\n        if (i != start) unvisited.emplace_back(i);\n    }\n    deque<int>\
    \ que{start};\n    vector<bool> tmp_ban(N, false);\n    while (!que.empty()) {\n\
    \        int now = que[0]; que.pf();\n        for (int x : ban[now]) tmp_ban[x]\
    \ = true;\n        vector<int> tmp_vis;\n        for (int x : unvisited) {\n \
    \           if (!tmp_ban[x]) {\n                tmp_vis.emplace_back(x), que.emplace_back(x);\n\
    \                dis[x] = dis[now] + 1;\n            }\n        }\n        tmp_vis.emplace_back(N);\
    \ /// INF\n        vector<int> tmp_uvis;\n        for (int i = 0; int x : tmp_vis)\
    \ {\n            while (i < ssize(unvisited) and unvisited[i] < x) {\n       \
    \         tmp_uvis.emplace_back(unvisited[i++]);\n            }\n            ++i;\n\
    \        }\n        tmp_uvis.swap(unvisited);\n        for (int x : ban[now])\
    \ tmp_ban[x] = false;\n    }\n    return dis;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/bfs_on_inverse_graph.hpp
  requiredBy:
  - graph/bfs_on_inverse_graph.cpp
  timestamp: '2024-10-08 01:20:28+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/bfs_on_inverse_graph.hpp
layout: document
title: BFS on Inverse Graph
---

- ref: [CF blog](https://codeforces.com/blog/entry/93801)
- 測試：[AtC - abc319_g](https://atcoder.jp/contests/abc319/tasks/abc319_g) / ([20240924](https://atcoder.jp/contests/abc319/submissions/58066261))
- [code](./bfs_on_inverse_graph.cpp)

## Usage

- `vector<int> bfs_on_inverse_graph(vector<vector<int>> &ban, int start, int base = 0)`
    - 回傳補圖上每個點離 `start` 的距離，走不到的點距離為 $-1$。
    - `ban` 是原圖的 adjacency list
    - `start` 是起點
    - `base` 是點的編號基底
- 時間計算量 $\mathcal{O}(n + m)$
- 空間計算量 $\mathcal{O}(n + m)$

## Benchmark

| N/A | Time |
| :-: | :--: |
| N/A | N/A ms |
