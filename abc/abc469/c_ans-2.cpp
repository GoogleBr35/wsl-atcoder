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
    vector<ll> hazure;
    for(int i = 0; i < n; ++i) {
        if(s[i] == 'x') hazure.push_back(i);
    }
    vector<ll> count(n, 0);
    for(int k = 1; k < n + 1; ++k) {
        if(hazure.size() < k) count[k - 1] = n;
        else {
            count[k - 1] = hazure[k - 1] + 1;
        }
        cout << count[k - 1] << endl;
    }
    return 0;
}