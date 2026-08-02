#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n;
    string s;
    cin >> n;
    cin >> s;
    // xがk個であるとき
    // 列が空
    vector<ll> hazure(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        hazure[i + 1] = hazure[i];
        if(s[i] == 'x') ++hazure[i + 1];
    }
    vector<ll> count(n + 1, 0);
    for(int i = 1; i < n + 1; ++i) {
        if(hazure[n] < i) {
            count[i] = n;
        } else {
            auto it = lower_bound(hazure.begin(), hazure.end(), i);
            count[i] = distance(hazure.begin(), it);
        }
        cout << count[i] << endl;
    }
    return 0;
}