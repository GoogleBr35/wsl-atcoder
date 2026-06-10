#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for(int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        ++mp[a];
    }

    ll P = 0;
    for(auto p:mp) {
        ll value = p.second;
        P += value * (value - 1) / 2;
    }

    // outputs
    cout << n * (n - 1) / 2 - P << endl;

    return 0;
}