#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> l;

ll sgn(ll x) {
    if(x > 0) return 1;
    else if(x < 0) return -1;
    return 0;
}

int main(void) {
    // inputs
    int n; cin >> n;
    l.resize(n);
    for(auto &x:l) {
        cin >> x;
        x *= 2;
    }
        
    int ans = 0;
    for(int bit = 0; bit < (1 << n); ++bit) {
        // bit <- 各値の正負を与える (0: 負, 1: 正)
        int count = 0;
        ll pos = 1;
        for(int i = 0; i < n; ++i) {
            ll posAfter = pos;
            if(bit & (1 << i)) posAfter += l[i]; // 正
            else posAfter -= l[i]; // 負
            if(sgn(pos) * sgn(posAfter) < 0) { // 正負が異なっていたら
                ++count;
            }
            pos = posAfter;
        }
        // 最大値の更新
        ans = max(count, ans);
    }

    // outputs
    cout << ans << endl;

    return 0;
}