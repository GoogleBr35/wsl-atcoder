#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n;
    cin >> n;
    vector<vector<ll>> a;
    a.resize(n);
    for(int i = 0; i < n; ++i) {
        ll l;
        cin >> l;
        a[i].resize(l);
        for(int j = 0; j < l; ++j) {
            ll x;
            cin >> x;
            a[i][j] = x;
        }
    }

    ll x, y;
    cin >> x >> y;
    --x; --y;

    // outputs
    cout << a[x][y] << endl;
    
    return 0;
}