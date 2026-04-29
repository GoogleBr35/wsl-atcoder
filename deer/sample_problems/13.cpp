#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    map<string, ll> s;
    for(int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        sort(x.begin(), x.end());
        ++s[x];
    }
    ll ans = 0;
    for(auto p:s) {
        ll count = p.second;
        if(count >= 2) ans += count * (count - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}