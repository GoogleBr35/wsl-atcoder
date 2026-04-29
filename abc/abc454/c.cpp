#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<ll>> ab;
vector<bool> canGet;

queue<ll> q;

void rec(int index, int item) {
    for(int j = index; ab[j][0] != item; ++j) {
        q.push(ab[j][1]);
        canGet[item] = true;
    }
}

int main(void) {
    // inputs
    ll n, m;
    cin >> n >> m;
    ab.resize(m);
    canGet.resize(n);
    for(int i = 0; i < m; ++i) {
        ab[i].resize(2);
        cin >> ab[i][0] >> ab[i][1];
        --ab[i][0]; --ab[i][1]; // 0-indexed
    }
    // abを[i][0]に基づいてソート
    sort(ab.begin(), ab.end());

    rec(0, 0);

    // outputs
    int count = 0;
    for(int i = 0; i < n; ++i) {
        if(canGet[i]) ++count;
    }
    cout << count << endl;

    return 0;
}