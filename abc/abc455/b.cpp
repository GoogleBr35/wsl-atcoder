#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for(auto &s:grid) cin >> s;

    int ans = 0;
    // h1, w1の全探索
    for(int h1 = 0; h1 < h; ++h1) {
        for(int w1 = 0; w1 < w; ++w1) {
            // h2, w2の全探索
            for(int h2 = h1; h2 < h; ++h2) {
                for(int w2 = w1; w2 < w; ++w2) {
                    // (i, j)のcheck
                    bool isOk = true;
                    for(int i = h1; i <= h2; ++i) {
                        for(int j = w1; j <= w2; ++j) {
                            if(grid[i][j] != grid[h1 + h2 - i][w1 + w2 - j]) isOk = false;
                        }
                    }
                    if(isOk) ans += 1;
                }
            }
        }
    }

    // outputs
    cout << ans << endl;
    return 0;
}