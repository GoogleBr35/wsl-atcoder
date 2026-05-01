#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    map<ll, int> mp;
    for(int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        ++mp[a];
    }

    int count = 0;
    for(auto p:mp) {
        if(p.second % 2 != 0) ++count;
    }

    // outputs
    cout << count << endl;

    return 0;
}