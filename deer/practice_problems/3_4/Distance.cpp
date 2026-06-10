#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    ll d;
    cin >> n >> d;
    int dots = 0;
    for(int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        if (x * x + y * y <= d * d) dots += 1; // 距離がd以下ならカウントアップ
    }

    // outputs
    cout << dots << endl;

    return 0;
}