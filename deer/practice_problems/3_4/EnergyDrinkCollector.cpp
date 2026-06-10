#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;
    vector<pair<ll, int>> ab(n);
    for(auto& p : ab) cin >> p.first >> p.second;

    // aでソート
    sort(ab.begin(), ab.end());
    // m本に達するまで最初の要素から買っていく
    pair<ll, int> current(0, 0); // current.first = 現在の費用, current.second = 現在の本数
    for(int i = 0; i < n; i++) {
        if(current.second + ab.at(i).second < m) { // i軒目でm本に到達しないとき
            // i軒目を全部買う
            current.first += ab.at(i).first * ab.at(i).second; // 費用 = 一本の値段 * 本数
            current.second += ab.at(i).second; // 本数
        } else { // i軒目でm本に到達するとき
            // i軒目をm本まで買う
            int diff = m - current.second; // 必要な本数
            current.first += ab.at(i).first * diff; // 費用 = 一本の値段 * 本数
            current.second += diff; // 本数 (m本に到達する)
            break;
        }
    }

    // outputs
    cout << current.first << endl;

    return 0;
}