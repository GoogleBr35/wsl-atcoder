#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfsVisit() {
    
}

void dfs() {

}

int main(void) {
    // inputs
    ll n;
    cin >> n;
    vector<ll> l(n);
    for(auto &x:l) cin >> x;

    ll ans = 0;
    ll pos = 1; // 実際は0.5、0.5をまたいだらという判定に言い換える
    ll direction = -1;
    for(ll i = 0; i < n; ++i) {
        ll posAfterMove = pos + direction * l[i];
        if((pos >= 1 && posAfterMove <= 0) || (pos <= 0 && posAfterMove >= 1)) {
            ans += 1;
            direction = -direction;
        }
        pos = posAfterMove;
    } 

    // outputs
    cout << ans << endl;

    return 0;
}