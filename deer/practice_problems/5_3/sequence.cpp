#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    map<ll, int> mp;
    for(int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        ++mp[a];
    }

    int ans = 0;
    for(auto p:mp) {
        if(p.first == p.second) continue;
        else if(p.first < p.second) ans += p.second - p.first;
        else ans += p.second;
    }

    // outputs
    cout << ans << endl;

    return 0;
}