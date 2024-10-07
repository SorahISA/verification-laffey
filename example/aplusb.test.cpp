#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include "aplusb.hpp"
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int A, B; cin >> A >> B;
    
    Plus<int> plus;
    cout << plus.plus(A, B) << "\n";
    
    return 0;
}
