---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/manacher.hpp
    title: Manacher
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/enumerate_palindromes
    links:
    - https://judge.yosupo.jp/problem/enumerate_palindromes
  bundledCode: "#line 1 \"string/manacher.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_palindromes\"\
    \n#line 1 \"string/manacher.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \ntemplate <typename T>\nvector<ptrdiff_t> manacher(const vector<T> &_v, T special_char)\
    \ {\n    int n = _v.size();\n    \n    vector<T> vec(2*n-1, special_char);\n \
    \   for (int i = 0; i < n; ++i) vec[2*i] = _v[i];\n    \n    vector<ptrdiff_t>\
    \ len(2*n-1, 0);\n    for (int i = 0, l = 0, r = -1; i <= 2*n-2; ++i) {\n    \
    \    if (i <= r) len[i] = min<ptrdiff_t>(len[l+r-i], r-i+1);\n        while (0\
    \ <= i - len[i] and i + len[i] <= 2*n-2 and vec[i - len[i]] == vec[i + len[i]])\
    \ {\n            l = i - len[i], r = i + len[i], ++len[i];\n        }\n    }\n\
    \    return len;\n}\n#line 4 \"string/manacher.test.cpp\"\nusing namespace std;\n\
    \nvoid solve() {\n    string S; cin >> S;\n    \n    auto len = manacher<char>(vector<char>(begin(S),\
    \ end(S)), '$');\n    \n    for (int i = 0; i < int(len.size()); ++i) len[i] -=\
    \ (~(len[i]^i) & 1);\n    \n    for (int i = 0; i < int(len.size()); ++i) {\n\
    \        cout << len[i] << \" \\n\"[i+1 == int(len.size())];\n    }\n}\n\nint32_t\
    \ main() {\n    cin.tie(0)->sync_with_stdio(0);\n    \n    solve();\n    \n  \
    \  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_palindromes\"\
    \n#include \"../string/manacher.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nvoid solve() {\n    string S; cin >> S;\n    \n    auto len = manacher<char>(vector<char>(begin(S),\
    \ end(S)), '$');\n    \n    for (int i = 0; i < int(len.size()); ++i) len[i] -=\
    \ (~(len[i]^i) & 1);\n    \n    for (int i = 0; i < int(len.size()); ++i) {\n\
    \        cout << len[i] << \" \\n\"[i+1 == int(len.size())];\n    }\n}\n\nint32_t\
    \ main() {\n    cin.tie(0)->sync_with_stdio(0);\n    \n    solve();\n    \n  \
    \  return 0;\n}\n"
  dependsOn:
  - string/manacher.hpp
  isVerificationFile: true
  path: string/manacher.test.cpp
  requiredBy: []
  timestamp: '2024-10-16 14:11:20+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: string/manacher.test.cpp
layout: document
redirect_from:
- /verify/string/manacher.test.cpp
- /verify/string/manacher.test.cpp.html
title: string/manacher.test.cpp
---
