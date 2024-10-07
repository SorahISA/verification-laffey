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
    links:
    - https://fhvirus.github.io/blog/2020/fhvirus-io/
  bundledCode: "#line 2 \"misc/macro.hpp\"\n\n#pragma GCC optimize(\"Ofast\", \"unroll-loops\"\
    )\n#include <bits/stdc++.h>\nusing namespace std;\n\nusing i64 = long long;\n\
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
    \        \n**/\n"
  code: "#pragma once\n\n#pragma GCC optimize(\"Ofast\", \"unroll-loops\")\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\nusing i64 = long long;\nusing i128\
    \ = __int128;\n#define int i64\nusing f80 = long double;\nusing f128 = __float128;\n\
    #define double f80\nusing pii = pair<int, int>;\ntemplate <typename T> using Prior\
    \ = std::priority_queue<T>;\ntemplate <typename T> using prior = std::priority_queue<T,\
    \ vector<T>, greater<T>>;\n\n// #define X first\n// #define Y second\n#define\
    \ eb emplace_back\n#define ef emplace_front\n#define ee emplace\n#define pb pop_back\n\
    #define pf pop_front\n#define ALL(x) begin(x), end(x)\n#define RALL(x) rbegin(x),\
    \ rend(x)\n#define SZ(x) ((int)(x).size())\n\n#ifndef local\n#define fastIO()\
    \ cin.tie(0)->sync_with_stdio(0)\n#define debug(...) void()\n#define print(...)\
    \ _P(__VA_ARGS__)\n#endif\n\ntemplate <size_t D, typename T> struct Vec : vector<Vec<D-1,\
    \ T>> {\n    static_assert(D >= 1, \"Vector dimension must be greater than zero!\"\
    );\n    template <typename... Args> Vec(int n = 0, Args... args) : vector<Vec<D-1,\
    \ T>>(n, Vec<D-1, T>(args...)) {}\n};\n\ntemplate <typename T> struct Vec<1, T>\
    \ : vector<T> {\n    Vec(int n = 0, const T& val = T()) : vector<T>(n, val) {}\n\
    };\n\ntemplate <typename T, typename U> bool chmin(T &lhs, U rhs) { return lhs\
    \ > rhs ? lhs = rhs, 1 : 0; }\ntemplate <typename T, typename U> bool chmax(T\
    \ &lhs, U rhs) { return lhs < rhs ? lhs = rhs, 1 : 0; }\n\ninline void _P() {\
    \ cout << \"\\n\"; }\ntemplate <typename T> inline void _P(T &&_t) { cout << _t\
    \ << \"\\n\"; }\ntemplate <typename T, typename ...U> inline void _P(T &&_t, U\
    \ &&..._u) { cout << _t << \" \", _P(_u...); }\n\nmt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());\n\
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
    \        \n**/\n"
  dependsOn: []
  isVerificationFile: false
  path: misc/macro.hpp
  requiredBy:
  - graph/bfs_on_inverse_graph.cpp
  timestamp: '2024-10-08 01:20:28+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: misc/macro.hpp
layout: document
title: Macros
---
