#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_palindromes"
#include "../string/manacher.hpp"
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S; cin >> S;
    
    auto len = manacher<char>(vector<char>(begin(S), end(S)), '$');
    
    for (int i = 0; i < int(len.size()); ++i) len[i] -= (~(len[i]^i) & 1);
    
    for (int i = 0; i < int(len.size()); ++i) {
        cout << len[i] << " \n"[i+1 == int(len.size())];
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    
    solve();
    
    return 0;
}
