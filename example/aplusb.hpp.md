---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: example/aplusb.test.cpp
    title: example/aplusb.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"example/aplusb.hpp\"\n\ntemplate <typename T>\nstruct Plus\
    \ {\n    \n    T plus(const T &a, const T &b) {\n        return a + b;\n    }\n\
    \    \n};\n"
  code: "#pragma once\n\ntemplate <typename T>\nstruct Plus {\n    \n    T plus(const\
    \ T &a, const T &b) {\n        return a + b;\n    }\n    \n};\n"
  dependsOn: []
  isVerificationFile: false
  path: example/aplusb.hpp
  requiredBy: []
  timestamp: '2024-10-08 00:47:47+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - example/aplusb.test.cpp
documentation_of: example/aplusb.hpp
layout: document
title: A + B
---

## Usage

- `Plus<T> P`: $T$ 型の加算を行うオブジェクトを作る
    - `T plus(const T &a, const T &b)`: $a + b$ を追加する
- 時間計算量 $\mathcal{O}(1)$
- 空間計算量 $\mathcal{O}(1)$

## Benchmark

| N/A | Time |
| :-: | :--: |
| N/A | N/A ms |
