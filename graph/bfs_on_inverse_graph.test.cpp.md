---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/bfs_on_inverse_graph.hpp
    title: BFS on Inverse Graph
  - icon: ':x:'
    path: misc/debug.hpp
    title: Debug Code
  - icon: ':x:'
    path: misc/macro.hpp
    title: misc/macro.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    links:
    - https://atcoder.jp/contests/abc319/tasks/abc319_g
  bundledCode: "#line 1 \"graph/bfs_on_inverse_graph.test.cpp\"\n// #define PROBLEM\
    \ \"https://atcoder.jp/contests/abc319/tasks/abc319_g\"\n#line 1 \"graph/bfs_on_inverse_graph.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\nvector<int> bfs_on_inverse_graph(auto\
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
    \ tmp_ban[x] = false;\n    }\n    return dis;\n}\n#line 2 \"misc/debug.hpp\"\n\
    \n#define _GLIBCXX_DEBUG 1\n#line 5 \"misc/debug.hpp\"\nusing namespace std;\n\
    \n#define fastIO() void()\n#define debug(...) \\\n    _color.emplace_back(\"\\\
    u001b[31m\"), \\\n    fprintf(stderr, \"%sAt [%s], line %d: (%s) = \", _color.back().c_str(),\
    \ __FUNCTION__, __LINE__, #__VA_ARGS__), \\\n    _do(__VA_ARGS__), _color.pop_back(),\
    \ \\\n    fprintf(stderr, \"%s\", _color.back().c_str())\n#define print(...) \\\
    \n    fprintf(stdout, \"%s\", \"\\u001b[36m\"), \\\n    _P(__VA_ARGS__), \\\n\
    \    fprintf(stdout, \"%s\", \"\\u001b[0m\")\n\ndeque<string> _color{\"\\u001b[0m\"\
    };\n\ntemplate <typename T> concept is_string = is_same_v<T, string&> or is_same_v<T,\
    \ const string&>;\ntemplate <typename T> concept is_iterable = requires (T _t)\
    \ { begin(_t); };\n\ntemplate <typename T> inline void _print_err(T &&_t);\ntemplate\
    \ <typename T> inline void _print_err(T &&_t) requires is_iterable<T> and (not\
    \ is_string<T>);\ntemplate <size_t I, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(const tuple<U...> &);\ntemplate <size_t\
    \ I, typename ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(const\
    \ tuple<U...> &_t);\ntemplate <size_t I, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(tuple<U...> &);\ntemplate <size_t I,\
    \ typename ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(tuple<U...>\
    \ &_t);\ntemplate <typename T, typename U> ostream& operator << (ostream &os,\
    \ const pair<T, U> &_tu);\n\ninline void _do() { cerr << \"\\n\"; }\ntemplate\
    \ <typename T> inline void _do(T &&_t) { _print_err(_t), cerr << \"\\n\"; }\n\
    template <typename T, typename ...U> inline void _do(T &&_t, U &&..._u) { _print_err(_t),\
    \ cerr << \", \", _do(_u...); }\n\ntemplate <typename T> inline void _print_err(T\
    \ &&_t) { cerr << _t; }\n\ntemplate <typename T> inline void _print_err(T &&_t)\
    \ requires is_iterable<T> and (not is_string<T>) {\n    string _tmp_color = _color.back();\n\
    \    ++_tmp_color[3], _color.emplace_back(_tmp_color);\n    cerr << _color.back()\
    \ << \"[\";\n    for (bool _first = true; auto &_x : _t) {\n        if (!_first)\
    \ cerr << \", \";\n        _print_err(_x), _first = false;\n    }\n    cerr <<\
    \ \"]\" << (_color.pop_back(), _color.back());\n}\n\ntemplate <typename T, typename\
    \ U> ostream& operator << (ostream &os, const pair<T, U> &_tu) {\n    string _tmp_color\
    \ = _color.back();\n    ++_tmp_color[3], _color.emplace_back(_tmp_color);\n  \
    \  cerr << _color.back() << \"(\";\n    _print_err(_tu.first), cerr << \", \"\
    , _print_err(_tu.second);\n    cerr << \")\" << (_color.pop_back(), _color.back());\n\
    \    return os;\n}\n\ntemplate <size_t I = 0, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(const tuple<U...> &) {\n    cerr <<\
    \ \")\" << (_color.pop_back(), _color.back());\n}\n\ntemplate <size_t I = 0, typename\
    \ ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(const\
    \ tuple<U...> &_t) {\n    if (!I) {\n        string _tmp_color = _color.back();\n\
    \        ++_tmp_color[3], _color.emplace_back(_tmp_color);\n        cerr << _color.back();\n\
    \    }\n    cerr << (I ? \", \" : \"(\"), _print_err(get<I>(_t)), _print_err<I+1,\
    \ U...>(_t);\n}\n\ntemplate <size_t I = 0, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(tuple<U...> &) {\n    cerr << \")\"\
    \ << (_color.pop_back(), _color.back());\n}\n\ntemplate <size_t I = 0, typename\
    \ ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(tuple<U...>\
    \ &_t) {\n    if (!I) {\n        string _tmp_color = _color.back();\n        ++_tmp_color[3],\
    \ _color.emplace_back(_tmp_color);\n        cerr << _color.back();\n    }\n  \
    \  cerr << (I ? \", \" : \"(\"), _print_err(get<I>(_t)), _print_err<I+1, U...>(_t);\n\
    }\n#line 2 \"misc/macro.hpp\"\n\n#pragma GCC optimize(\"Ofast\", \"unroll-loops\"\
    )\n#line 5 \"misc/macro.hpp\"\nusing namespace std;\n\nusing i64 = long long;\n\
    using i128 = __int128;\n#define int i64\nusing f80 = long double;\nusing f128\
    \ = __float128;\n#define double f80\nusing pii = pair<int, int>;\ntemplate <typename\
    \ T> using Prior = std::priority_queue<T>;\ntemplate <typename T> using prior\
    \ = std::priority_queue<T, vector<T>, greater<T>>;\n\n// #define X first\n// #define\
    \ Y second\n#define eb emplace_back\n#define ef emplace_front\n#define ee emplace\n\
    #define pb pop_back\n#define pf pop_front\n#define ALL(x) begin(x), end(x)\n#define\
    \ RALL(x) rbegin(x), rend(x)\n#define SZ(x) ((int)(x).size())\n\n#ifndef local\n\
    #define fastIO() cin.tie(0)->sync_with_stdio(0)\n#define debug(...) void()\n#define\
    \ print(...) _P(__VA_ARGS__)\n#endif\n\ntemplate <size_t D, typename T> struct\
    \ Vec : vector<Vec<D-1, T>> {\n    static_assert(D >= 1, \"Vector dimension must\
    \ be greater than zero!\");\n    template <typename... Args> Vec(int n = 0, Args...\
    \ args) : vector<Vec<D-1, T>>(n, Vec<D-1, T>(args...)) {}\n};\n\ntemplate <typename\
    \ T> struct Vec<1, T> : vector<T> {\n    Vec(int n = 0, const T& val = T()) :\
    \ vector<T>(n, val) {}\n};\n\ntemplate <typename T, typename U> bool chmin(T &lhs,\
    \ U rhs) { return lhs > rhs ? lhs = rhs, 1 : 0; }\ntemplate <typename T, typename\
    \ U> bool chmax(T &lhs, U rhs) { return lhs < rhs ? lhs = rhs, 1 : 0; }\n\ninline\
    \ void _P() { cout << \"\\n\"; }\ntemplate <typename T> inline void _P(T &&_t)\
    \ { cout << _t << \"\\n\"; }\ntemplate <typename T, typename ...U> inline void\
    \ _P(T &&_t, U &&..._u) { cout << _t << \" \", _P(_u...); }\n\nmt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());\n\
    \ninline int getRand(int L, int R) {\n    if (L > R) swap(L, R);\n    return (int)(rng()\
    \ % ((uint64_t)R - L + 1) + L);\n}\n\n/// below are Fast I/O and _print_err templates\
    \ ///\n\n/*\n/// Fast I/O by FHVirus ///\n/// https://fhvirus.github.io/blog/2020/fhvirus-io/\
    \ ///\n\n#include <unistd.h>\n\nconst int S = 65536;\n\nint OP = 0;\nchar OB[S];\n\
    \ninline char RC() {\n    static char buf[S], *p = buf, *q = buf;\n    return\
    \ p == q and (q = (p = buf) + read(0, buf, S)) == buf ? -1 : *p++;\n}\n\ninline\
    \ int RI() {\n    static char c;\n    int a;\n    while (((c = RC()) < '0' or\
    \ c > '9') and c != '-' and c != -1);\n    if (c == '-') {\n        a = 0;\n \
    \       while ((c = RC()) >= '0' and c <= '9') a *= 10, a -= c ^ '0';\n    }\n\
    \    else {\n        a = c ^ '0';\n        while ((c = RC()) >= '0' and c <= '9')\
    \ a *= 10, a += c ^ '0';\n    }\n    return a;\n}\n\ninline void WI(int n, char\
    \ c = '\\n') {\n    static char buf[20], p;\n    if (n == 0) OB[OP++] = '0';\n\
    \    p = 0;\n    if (n < 0) {\n        OB[OP++] = '-';\n        while (n) buf[p++]\
    \ = '0' - (n % 10), n /= 10;\n    }\n    else {\n        while (n) buf[p++] =\
    \ '0' + (n % 10), n /= 10;\n    }\n    for (--p; p >= 0; --p) OB[OP++] = buf[p];\n\
    \    OB[OP++] = c;\n    if (OP > S-20) write(1, OB, OP), OP = 0;\n}\n\n/// Fast\
    \ I/O by FHVirus ///\n/// https://fhvirus.github.io/blog/2020/fhvirus-io/ ///\n\
    */\n\n/**\n *                                                                \
    \                                                 \n *                       \
    \                                                                            \
    \              \n *                                                          \
    \                                                       \n *                 \
    \           iiiiii         iiiiiiiiii       iiiiiiiiiiiiii                   \
    \                    \n *                       iiiiiiiiiiiii   iiiiiii    iiii\
    \    iiiiiiiiiiiiiii                          ii   iiii     \n *             \
    \       iiiiiiii     iiiiiiiii         iiii       iiii iii              iii  \
    \        iiiiiiiiii      \n *                 iiiiiii          iiiiii        \
    \   iiii    iiii   ii           iiiiiiiiii      iiii iiii         \n *       \
    \        iiiiii            iiiii             iiii iiii        iii      iiii  \
    \  iiiiiiiiiiiiiiiii  ii       \n *             iiiiii            iiiiiii    \
    \        iiiiiii       iiiiiiii   iii    iiiiiiiiiiiiii iii  iiii       \n * \
    \          iiiiii             iiiiiii            iiiii   ii   iiii       iiiiiiiiiii\
    \ iiii  iii iiii iiii      iii\n *          iiiii              iiiiiiii      \
    \ ii        iiiii iiii    iiiiiiiii        iii iii  iii  iii  ii  iiii \n *  \
    \      iiiiii              iiiiiiii      iiiii     iiiii iiiiiiiiiiiiiiii    \
    \     iii  iii  ii  iii  iii iiii   \n *       iiiii                 iiiiii  \
    \   iiii     iiiiii iiiiiii    iii iii       iiii  ii   i   ii  iii  iii     \n\
    \ *     iiiiii                            iiii  iiiiiiiiiiiiiii       iii iiii\
    \   iiiii  iii  ii  iii  iii  ii       \n *    iiiii                         \
    \     iiiiiiii iiiiiiiiii       iiii   iiiiiiiii            ii  iii  ii      \
    \   \n *   iiiii                                     iiiiii  iiii      iiiii \
    \             iii      ii   ii  i            \n * iiiiii                     \
    \             iiiiiiii   iiiii    iiiii                        ii  ii   ii   \
    \         \n * iiiii                                iiii  iiii    iiiiiiiiiiii\
    \                             ii                  \n *  iii                  \
    \            iiii   iiii       iiiiiiii                                      \
    \              \n *                                iiiii   iiii              \
    \                                                       \n *                 \
    \             iiii     iiii                                                  \
    \                    \n *                            iiii    iiiii           \
    \                                                             \n *           \
    \               iii     iiiii                                                \
    \                          \n *                        iii     iiiii         \
    \                                                                   \n *     \
    \                  iii   iiiiii                                              \
    \                                \n *                       iiiiiiiii        \
    \                                                                         \n *\
    \                       iiiiii                                               \
    \                                     \n *                                   \
    \                                                                            \
    \  \n *                                                                      \
    \                                           \n *                             \
    \                                                                            \
    \        \n**/\n#line 6 \"graph/bfs_on_inverse_graph.test.cpp\"\nusing namespace\
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
  code: "// #define PROBLEM \"https://atcoder.jp/contests/abc319/tasks/abc319_g\"\n\
    #include \"graph/bfs_on_inverse_graph.hpp\"\n#include \"misc/debug.hpp\"\n#include\
    \ \"misc/macro.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\nconst\
    \ int mod = 998'244'353;\n\nvoid solve() {\n    int N, M; cin >> N >> M;\n   \
    \ \n    vector<vector<int>> ban(N);\n    for (int i = 0; i < M; ++i) {\n     \
    \   int u, v; cin >> u >> v, --u, --v;\n        ban[u].eb(v), ban[v].eb(u);\n\
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
  - graph/bfs_on_inverse_graph.hpp
  - misc/debug.hpp
  - misc/macro.hpp
  isVerificationFile: true
  path: graph/bfs_on_inverse_graph.test.cpp
  requiredBy: []
  timestamp: '2024-10-08 01:22:02+08:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: graph/bfs_on_inverse_graph.test.cpp
layout: document
redirect_from:
- /verify/graph/bfs_on_inverse_graph.test.cpp
- /verify/graph/bfs_on_inverse_graph.test.cpp.html
title: graph/bfs_on_inverse_graph.test.cpp
---
