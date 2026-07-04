#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int chargeX, chargeY, l, r, a, b;
    cin >> chargeX >> chargeY >> l >> r >> a >> b;

    int ans = 0;
    for(int i = a; i < b; ++i) {
        if(l <= i && i < r) ans += chargeX;
        else ans += chargeY;
    }
    cout << ans << endl;
    return 0;
}