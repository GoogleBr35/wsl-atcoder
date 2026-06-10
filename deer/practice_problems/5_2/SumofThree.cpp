#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int k, s;
    cin >> k >> s;

    int ans = 0;
    for(int x = 0; x <= k; ++x) {
        for(int y = 0; y <= k; ++y) {
            int z = s - x - y;
            if(0 <= z && z <= k) {
                // if(x == y && y == z) ans += 1;
                // else ans += 3;
                ans += 1;
            }
        }
    }

    // outputs
    cout << ans << endl;

    return 0;
}