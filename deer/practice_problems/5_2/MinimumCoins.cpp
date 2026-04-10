#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n;
    cin >> n;
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = 10000;
    for(int i = 0; i < 10000; ++i) {
        for(int j = 0; i + j < 10000; ++j) {
            ll rest = n - a * i - b * j; // 残額
            if(rest < 0) continue;
            if(rest % (ll)c == 0) ans = min(i + j + rest/c, ans); 
        }
    }

    // outputs
    cout << ans << endl;

    return 0;
}