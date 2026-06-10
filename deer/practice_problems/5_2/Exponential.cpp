#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll x;
    cin >> x;

    ll ans = 1;
    for(int b = 2; b < x; ++b) {
        for(int p = 2; p < 10; ++p) {
            ll work = 1;
            for(int i = 0; i < p; ++i) work = work * b;
            if(ans < work && work <= x) ans = work;
            if(work > x) break;
        }
    }

    // outputs
    cout << ans << endl;

    return 0;
}