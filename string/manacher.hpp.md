---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: string/manacher.test.cpp
    title: string/manacher.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/manacher.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\ntemplate <typename T>\nvector<ptrdiff_t> manacher(const vector<T> &_v,\
    \ T special_char) {\n    int n = _v.size();\n    \n    vector<T> vec(2*n-1, special_char);\n\
    \    for (int i = 0; i < n; ++i) vec[2*i] = _v[i];\n    \n    vector<ptrdiff_t>\
    \ len(2*n-1, 0);\n    for (int i = 0, l = 0, r = -1; i <= 2*n-2; ++i) {\n    \
    \    if (i <= r) len[i] = min<ptrdiff_t>(len[l+r-i], r-i+1);\n        while (0\
    \ <= i - len[i] and i + len[i] <= 2*n-2 and vec[i - len[i]] == vec[i + len[i]])\
    \ {\n            l = i - len[i], r = i + len[i], ++len[i];\n        }\n    }\n\
    \    return len;\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate <typename T>\n\
    vector<ptrdiff_t> manacher(const vector<T> &_v, T special_char) {\n    int n =\
    \ _v.size();\n    \n    vector<T> vec(2*n-1, special_char);\n    for (int i =\
    \ 0; i < n; ++i) vec[2*i] = _v[i];\n    \n    vector<ptrdiff_t> len(2*n-1, 0);\n\
    \    for (int i = 0, l = 0, r = -1; i <= 2*n-2; ++i) {\n        if (i <= r) len[i]\
    \ = min<ptrdiff_t>(len[l+r-i], r-i+1);\n        while (0 <= i - len[i] and i +\
    \ len[i] <= 2*n-2 and vec[i - len[i]] == vec[i + len[i]]) {\n            l = i\
    \ - len[i], r = i + len[i], ++len[i];\n        }\n    }\n    return len;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: string/manacher.hpp
  requiredBy: []
  timestamp: '2024-10-16 14:11:20+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - string/manacher.test.cpp
documentation_of: string/manacher.hpp
layout: document
title: Manacher
---

- 測試：[Library Checker - Enumerate Palindromes](https://judge.yosupo.jp/problem/enumerate_palindromes)
- [code](./manacher.test.cpp)

## Usage

- `vector<ptrdiff_t> manacher(const vector<T> &_v, T special_char)`
    - 回傳長度 $2n-1$ 的陣列，代表以每個位置為中心的最長迴文半徑
    - `_v`：長度 $n$ 的陣列
    - `special_char`：一個沒有出現在 `_v` 中的特殊字元
    - 算法會將陣列 `_v` pad 成長度 $2n-1$ 的陣列，其中奇數位置為 `_v` 的元素，偶數位置為 `special_char`
- 時間計算量 $\mathcal{O}(\lvert\texttt{\_v}\rvert)$
- 空間計算量 $\mathcal{O}(\lvert\texttt{\_v}\rvert)$

## Benchmark

| N/A | Time |
| :-: | :--: |
| N/A | N/A ms |
