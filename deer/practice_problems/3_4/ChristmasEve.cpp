#include <bits/stdc++.h>
using namespace std;
constexpr int INF = 1 << 30; // 十分大きい値

int main(void) {
    // inputs
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(auto& x : h) cin >> x;

    sort(h.begin(), h.end()); // 低い順でソート
    int ans = INF;
    for(int i = 0; i < n - k + 1; i++) {
        int diff = h.at(i + k - 1) - h.at(i);
        ans = min(diff, ans);
    }
    
    // outputs
    cout << ans << endl;

    return 0;
}