#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n, k;
    cin >> n >> k;
    map<int, int> a;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        ++a[x];
    }

    vector<ll> aa;
    for(auto p:a) {
        aa.push_back(p.second);
    }
    sort(aa.rbegin(), aa.rend());
    ll ans = 0;
    while(aa.size() > k) {
        ans += aa.back();
        aa.pop_back();
    }

    // outputs
    cout << ans << endl;
    return 0;
}