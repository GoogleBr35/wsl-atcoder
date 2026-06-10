#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> a;
    a.resize(n);
    for(int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        a[i] = x;
    }
    
    ll pre = 0;
    ll cur = 0;
    ll index = 0;
    while(cur < k) {
    
    }
    
    // outputs
    cout << a[index - 1] << endl;
    
    return 0;
}