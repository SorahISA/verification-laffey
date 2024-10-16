#include <bits/stdc++.h>
using namespace std;

template <typename T>
vector<ptrdiff_t> manacher(const vector<T> &_v, T special_char) {
    int n = _v.size();
    
    vector<T> vec(2*n-1, special_char);
    for (int i = 0; i < n; ++i) vec[2*i] = _v[i];
    
    vector<ptrdiff_t> len(2*n-1, 0);
    for (int i = 0, l = 0, r = -1; i <= 2*n-2; ++i) {
        if (i <= r) len[i] = min<ptrdiff_t>(len[l+r-i], r-i+1);
        while (0 <= i - len[i] and i + len[i] <= 2*n-2 and vec[i - len[i]] == vec[i + len[i]]) {
            l = i - len[i], r = i + len[i], ++len[i];
        }
    }
    return len;
}
