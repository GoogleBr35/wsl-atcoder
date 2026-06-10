#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;

    map<int, int> a;
    for(int i = 0; i < n; ++i) {
        int k; cin >> k;
        for(int j = 0; j < k; ++j) {
            int x; cin >> x;
            ++a[x];
        }
    }

    int ans = 0;
    for(auto p:a) {
        if(p.second == n) ++ans;
    }

    // outputs
    cout << ans << endl;
    return 0;
}