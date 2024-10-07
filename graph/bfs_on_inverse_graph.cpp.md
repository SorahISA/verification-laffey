---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: graph/bfs_on_inverse_graph.hpp
    title: BFS on Inverse Graph
  - icon: ':warning:'
    path: misc/macro.hpp
    title: Macros
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://atcoder.jp/contests/abc319/tasks/abc319_g
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ graph/bfs_on_inverse_graph.cpp: line 3: unable to process #include in #if /\
    \ #ifdef / #ifndef other than include guards\n"
  code: "#define PROBLEM \"https://atcoder.jp/contests/abc319/tasks/abc319_g\"\n#ifdef\
    \ local\n#include \"misc/debug.hpp\"\n#endif\n#include \"misc/macro.hpp\"\n#include\
    \ \"graph/bfs_on_inverse_graph.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nconst int mod = 998'244'353;\n\nvoid solve() {\n    int N, M; cin >>\
    \ N >> M;\n    \n    vector<vector<int>> ban(N);\n    for (int i = 0; i < M; ++i)\
    \ {\n        int u, v; cin >> u >> v, --u, --v;\n        ban[u].eb(v), ban[v].eb(u);\n\
    \    }\n    \n    auto dis = bfs_on_inverse_graph(ban, 0, 0);\n    \n    if (dis[N-1]\
    \ == -1) { cout << -1 << \"\\n\"; return; }\n    \n    vector<vector<int>> lay(dis[N-1]\
    \ + 1);\n    for (int i = 0; i < N; ++i) { if (dis[i] <= dis[N-1] and dis[i] !=\
    \ -1) lay[dis[i]].eb(i); }\n    \n    vector<int> dp(N, 0); dp[0] = 1;\n    for\
    \ (int l = 1; l <= dis[N-1]; ++l) {\n        int sum = 0;\n        for (int x\
    \ : lay[l-1]) sum += dp[x];\n        for (int now : lay[l]) {\n            dp[now]\
    \ = sum;\n            for (int x : ban[now]) {\n                if (dis[x] ==\
    \ l-1) dp[now] -= dp[x];\n            }\n            dp[now] %= mod;\n       \
    \ }\n    }\n    cout << dp[N-1] << \"\\n\";\n}\n\nint32_t main() {\n    fastIO();\n\
    \    \n    int t = 1; // cin >> t;\n    for (int _ = 1; _ <= t; ++_) {\n     \
    \   // cout << \"Case #\" << _ << \": \";\n        solve();\n    }\n    \n   \
    \ return 0;\n}\n"
  dependsOn:
  - misc/macro.hpp
  - graph/bfs_on_inverse_graph.hpp
  isVerificationFile: false
  path: graph/bfs_on_inverse_graph.cpp
  requiredBy: []
  timestamp: '2024-10-08 01:32:33+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/bfs_on_inverse_graph.cpp
layout: document
redirect_from:
- /library/graph/bfs_on_inverse_graph.cpp
- /library/graph/bfs_on_inverse_graph.cpp.html
title: graph/bfs_on_inverse_graph.cpp
---
