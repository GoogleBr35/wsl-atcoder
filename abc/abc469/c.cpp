#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n;
    string s;
    cin >> n;
    cin >> s;
    vector<ll> sum(n + 1, 0);
    for(ll i = 0; i < n; ++i) {
        if(s[i] == 'o') sum[i+1] = sum[i] + 1;
        else sum[i+1] = sum[i];
    }
    vector<ll> count(n, 0);
    for(ll i = 1; i < n + 1; ++i) {
        // init
        // count[i-1] += i;
        ll atari = sum[i];
        ll cur = i;
        ll pre;
        while(cur < n) {
            pre = cur;
            cur = cur + atari;
            atari = sum[cur] - sum[pre] - atari + 1;
            if(atari <= 0) break;
        }
        if(cur > n) count[i-1] += n;
        else count[i-1] += cur;
    }
    for(int i = 0; i < n; ++i) {
        cout << count[i] << endl;
    }
    return 0;
}