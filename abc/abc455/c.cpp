#include <bits/stdc++.h>
#define SIZE 100000001
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    ll n, k;
    cin >> n >> k;
    vector<int> num1; // 連想配列
    num1.resize(SIZE);
    for(ll i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        ++num1[x];
    }

    // num2[x] = ある整数 i が置き換えられた時の影響力 i * iの個数
    vector<ll> num2;
    num2.reserve(300000);
    for(int i = 1; i <= SIZE - 1; ++i) {
        if(num1[i] == 0) continue;
        ll x =(ll)i * num1[i];
        num2.push_back(x);
    }

    // 影響力でソート
    sort(num2.rbegin(), num2.rend());

    // outputs
    // 配列numのk番目以降の影響力の総和
    ll min = 0;
    for(ll i = k; i < (ll)num2.size(); ++i) {
        min += num2[i];
    }
    cout << min << endl;
    
    return 0;
}