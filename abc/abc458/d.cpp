#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll x;
    cin >> x;
    ll q;
    cin >> q;

    priority_queue <ll> L;
    priority_queue <ll, vector<ll>, greater<ll>> R;
    L.push(x); // 
    auto add = [&](int v) {
        if(v <= L.top()) {
            L.push(v);
        } else {
            R.push(v);
        }
        if(L.size() < R.size() + 1) {
            L.push(R.top());
            R.pop();
        }
        if(L.size() > R.size() + 1) {
            R.push(L.top());
            L.pop();
        }
    };

    for(int i = 0; i < q; ++i) {
        ll a, b;
        cin >> a >> b;
        add(a); add(b);
        cout << L.top() << endl;
    }
    
    return 0;
}