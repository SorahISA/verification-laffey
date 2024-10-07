#pragma once

#pragma GCC optimize("Ofast", "unroll-loops")
#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using i128 = __int128;
#define int i64
using f80 = long double;
using f128 = __float128;
#define double f80
using pii = pair<int, int>;
template <typename T> using Prior = std::priority_queue<T>;
template <typename T> using prior = std::priority_queue<T, vector<T>, greater<T>>;

// #define X first
// #define Y second
#define eb emplace_back
#define ef emplace_front
#define ee emplace
#define pb pop_back
#define pf pop_front
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define SZ(x) ((int)(x).size())

#ifndef local
#define fastIO() cin.tie(0)->sync_with_stdio(0)
#define debug(...) void()
#define print(...) _P(__VA_ARGS__)
#endif

template <size_t D, typename T> struct Vec : vector<Vec<D-1, T>> {
    static_assert(D >= 1, "Vector dimension must be greater than zero!");
    template <typename... Args> Vec(int n = 0, Args... args) : vector<Vec<D-1, T>>(n, Vec<D-1, T>(args...)) {}
};

template <typename T> struct Vec<1, T> : vector<T> {
    Vec(int n = 0, const T& val = T()) : vector<T>(n, val) {}
};

template <typename T, typename U> bool chmin(T &lhs, U rhs) { return lhs > rhs ? lhs = rhs, 1 : 0; }
template <typename T, typename U> bool chmax(T &lhs, U rhs) { return lhs < rhs ? lhs = rhs, 1 : 0; }

inline void _P() { cout << "\n"; }
template <typename T> inline void _P(T &&_t) { cout << _t << "\n"; }
template <typename T, typename ...U> inline void _P(T &&_t, U &&..._u) { cout << _t << " ", _P(_u...); }

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline int getRand(int L, int R) {
    if (L > R) swap(L, R);
    return (int)(rng() % ((uint64_t)R - L + 1) + L);
}

/// below are Fast I/O and _print_err templates ///

/*
/// Fast I/O by FHVirus ///
/// https://fhvirus.github.io/blog/2020/fhvirus-io/ ///

#include <unistd.h>

const int S = 65536;

int OP = 0;
char OB[S];

inline char RC() {
    static char buf[S], *p = buf, *q = buf;
    return p == q and (q = (p = buf) + read(0, buf, S)) == buf ? -1 : *p++;
}

inline int RI() {
    static char c;
    int a;
    while (((c = RC()) < '0' or c > '9') and c != '-' and c != -1);
    if (c == '-') {
        a = 0;
        while ((c = RC()) >= '0' and c <= '9') a *= 10, a -= c ^ '0';
    }
    else {
        a = c ^ '0';
        while ((c = RC()) >= '0' and c <= '9') a *= 10, a += c ^ '0';
    }
    return a;
}

inline void WI(int n, char c = '\n') {
    static char buf[20], p;
    if (n == 0) OB[OP++] = '0';
    p = 0;
    if (n < 0) {
        OB[OP++] = '-';
        while (n) buf[p++] = '0' - (n % 10), n /= 10;
    }
    else {
        while (n) buf[p++] = '0' + (n % 10), n /= 10;
    }
    for (--p; p >= 0; --p) OB[OP++] = buf[p];
    OB[OP++] = c;
    if (OP > S-20) write(1, OB, OP), OP = 0;
}

/// Fast I/O by FHVirus ///
/// https://fhvirus.github.io/blog/2020/fhvirus-io/ ///
*/

/**
 *                                                                                                                 
 *                                                                                                                 
 *                                                                                                                 
 *                            iiiiii         iiiiiiiiii       iiiiiiiiiiiiii                                       
 *                       iiiiiiiiiiiii   iiiiiii    iiii    iiiiiiiiiiiiiii                          ii   iiii     
 *                    iiiiiiii     iiiiiiiii         iiii       iiii iii              iii          iiiiiiiiii      
 *                 iiiiiii          iiiiii           iiii    iiii   ii           iiiiiiiiii      iiii iiii         
 *               iiiiii            iiiii             iiii iiii        iii      iiii    iiiiiiiiiiiiiiiii  ii       
 *             iiiiii            iiiiiii            iiiiiii       iiiiiiii   iii    iiiiiiiiiiiiii iii  iiii       
 *           iiiiii             iiiiiii            iiiii   ii   iiii       iiiiiiiiiii iiii  iii iiii iiii      iii
 *          iiiii              iiiiiiii       ii        iiiii iiii    iiiiiiiii        iii iii  iii  iii  ii  iiii 
 *        iiiiii              iiiiiiii      iiiii     iiiii iiiiiiiiiiiiiiii         iii  iii  ii  iii  iii iiii   
 *       iiiii                 iiiiii     iiii     iiiiii iiiiiii    iii iii       iiii  ii   i   ii  iii  iii     
 *     iiiiii                            iiii  iiiiiiiiiiiiiii       iii iiii   iiiii  iii  ii  iii  iii  ii       
 *    iiiii                              iiiiiiii iiiiiiiiii       iiii   iiiiiiiii            ii  iii  ii         
 *   iiiii                                     iiiiii  iiii      iiiii              iii      ii   ii  i            
 * iiiiii                                  iiiiiiii   iiiii    iiiii                        ii  ii   ii            
 * iiiii                                iiii  iiii    iiiiiiiiiiii                             ii                  
 *  iii                              iiii   iiii       iiiiiiii                                                    
 *                                iiiii   iiii                                                                     
 *                              iiii     iiii                                                                      
 *                            iiii    iiiii                                                                        
 *                          iii     iiiii                                                                          
 *                        iii     iiiii                                                                            
 *                       iii   iiiiii                                                                              
 *                       iiiiiiiii                                                                                 
 *                       iiiiii                                                                                    
 *                                                                                                                 
 *                                                                                                                 
 *                                                                                                                 
**/
