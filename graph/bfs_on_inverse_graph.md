---
title: BFS on Inverse Graph
documentation_of: ./bfs_on_inverse_graph.hpp
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
