---
title: Manacher
documentation_of: ./manacher.hpp
---

- 測試：[Library Checker - Enumerate Palindromes](https://judge.yosupo.jp/problem/enumerate_palindromes)
- [code](./manacher.test.cpp)

## Usage

- `vector<ptrdiff_t> manacher(const vector<T> &_v, T special_char)`
    - 回傳長度 $2n-1$ 的陣列，代表以每個位置為中心的最長迴文半徑
    - `_v`：長度 $n$ 的陣列
    - `special_char`：一個沒有出現在 `_v` 中的特殊字元
    - 算法會將陣列 `_v` pad 成長度 $2n-1$ 的陣列，其中奇數位置為 `_v` 的元素，偶數位置為 `special_char`
- 時間計算量 $\mathcal{O}(|\texttt{_v}|)$
- 空間計算量 $\mathcal{O}(|\texttt{_v}|)$

## Benchmark

| N/A | Time |
| :-: | :--: |
| N/A | N/A ms |
