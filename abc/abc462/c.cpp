#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n;
    cin >> n;
    vector<tuple<double, ll, ll>> u;
    vector<tuple<double, ll, ll>> d;
    vector<tuple<double, ll, ll>> m;
    for(int i = 0; i < n; ++i) {
        ll x, y;
        cin >> x >> y;
        double dist = sqrt(x * x + y * y);
        if(x < y) {
            u.push_back(make_tuple(dist, x, y));
        } else if(x > y) {
            d.push_back(make_tuple(dist, x, y));
        } else {
            m.push_back(make_tuple(dist, x, y));
        }
    }
    sort(u.begin(), u.end());
    sort(d.begin(), d.end());
    sort(m.begin(), m.end());
    bool uIsExist = (u.size() > 0) ? true : false;
    bool dIsExist = (d.size() > 0) ? true : false;
    bool mIsExist = (m.size() > 0) ? true : false;
    double u_min_dist = (uIsExist) ? get<0>(u[0]) : sqrt(n * n) + 1;
    double d_min_dist = (dIsExist) ? get<0>(d[0]) : sqrt(n * n) + 1;
    double m_min_dist = (mIsExist) ? get<0>(m[0]) : sqrt(n * n) + 1;
    if(mIsExist && min(u_min_dist, d_min_dist) > m_min_dist) {
        cout << 1 << endl;
        return 0;
    }
    ll ans;
    if(uIsExist && dIsExist) ans = 2;
    else if(uIsExist || dIsExist) ans = 1;
    for(int i = 1; i < u.size(); ++i) {
        if(get<0>(u[i]) != u_min_dist) {
            break;
        }
        ++ans;
    }
    for(int i = 1; i < d.size(); ++i) {
        if(get<0>(d[i]) != d_min_dist) {
            break;
        }
        ++ans;
    }
    if(min(u_min_dist, d_min_dist) == m_min_dist) ++ans;
    cout << ans << endl;
    return 0;
}