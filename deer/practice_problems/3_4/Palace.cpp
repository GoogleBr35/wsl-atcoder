#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, t, a;
    cin >> n >> t >> a;

    int cc = 1 << 30;
    int res = 0;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        // 差の計算
        int diff = (t*1000 - x * 6) - a * 1000;
        if(diff < 0) diff = -diff;
        // これが最小なら更新
        if(diff < cc) {
            cc = diff;
            res = i;
        }
    }

    // outputs
    cout << res << endl;
    
    return 0;
}