#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n, k, m;
    cin >> n >> k >> m;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; ++i) {
        ll color, value;
        cin >> color >> value;
        v[i].first = value; v[i].second = color - 1; // color は 0-indexed
    }
    sort(v.rbegin(), v.rend());

    ll max = 0;
    ll count = 0;
    std::set<int> isSelected;
    int i = 0;
    while(i < k - (m - 1)) {
        ll xValue = v[i].first;
        ll xColor = v[i].second;
        isSelected.insert(xColor);
        max += xValue;
        v[i].first = 0;
        ++count;
        ++i;
    }
    if(isSelected.size() < m) {
        ll numRequiredColor = m - isSelected.size();
        while(numRequiredColor > 0) {
            ll xValue = v[i].first;
            ll xColor = v[i].second;
            if(isSelected.insert(xColor).second) { // success
                max += xValue;
                v[i].first = 0;
                ++count;
                --numRequiredColor;
            }
            ++i;
        }
    }
    sort(v.rbegin(), v.rend());
    i = 0;
    while(count < k) {
        ll xValue = v[i].first;
        max += xValue;
        v[i].first = 0;
        ++count;
        ++i;
    }

    // outputs
    cout << max << endl;

    return 0;
}