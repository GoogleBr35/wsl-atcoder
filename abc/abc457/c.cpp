#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n;
    cin >> n;
    ll k;
    cin >> k;
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
    vector<ll> c;
    c.resize(n);
    for(int i = 0; i < n; ++i) {
        ll v;
        cin >> v;
        c[i] = v;
    }
    ll pre = 0;
    ll cur = 0;
    ll index = 0;
    while(cur < k) {
        if(index >= 1) pre = cur;
        cur = pre + a[index].size() * c[index];
        ++index;
    }
    // l[i] == a[i].size()
    // a[i].size() * c[i]

    // outputs
    cout << a[index - 1][(k - pre - 1) % a[index - 1].size()] << endl;
    
    return 0;
}