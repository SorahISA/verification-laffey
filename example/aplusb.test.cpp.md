---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: example/aplusb.hpp
    title: A + B
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"example/aplusb.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\
    \n#line 2 \"example/aplusb.hpp\"\n\ntemplate <typename T>\nstruct Plus {\n   \
    \ \n    T plus(const T &a, const T &b) {\n        return a + b;\n    }\n    \n\
    };\n#line 3 \"example/aplusb.test.cpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nint32_t main() {\n    cin.tie(0)->sync_with_stdio(0);\n    \n    int\
    \ A, B; cin >> A >> B;\n    \n    Plus<int> plus;\n    cout << plus.plus(A, B)\
    \ << \"\\n\";\n    \n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n#include \"aplusb.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\nint32_t main() {\n    cin.tie(0)->sync_with_stdio(0);\n\
    \    \n    int A, B; cin >> A >> B;\n    \n    Plus<int> plus;\n    cout << plus.plus(A,\
    \ B) << \"\\n\";\n    \n    return 0;\n}\n"
  dependsOn:
  - example/aplusb.hpp
  isVerificationFile: true
  path: example/aplusb.test.cpp
  requiredBy: []
  timestamp: '2024-10-08 00:47:47+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: example/aplusb.test.cpp
layout: document
redirect_from:
- /verify/example/aplusb.test.cpp
- /verify/example/aplusb.test.cpp.html
title: example/aplusb.test.cpp
---
