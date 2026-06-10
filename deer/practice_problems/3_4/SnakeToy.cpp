#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& x : l) cin >> x;

    int maxLength = 0;
    // 大きい順でソート
    sort(l.begin(), l.end(), greater());
    // k個の要素の和を計算する
    for(int i = 0; i < k; i++) {
        maxLength += l.at(i);
    }

    // outputs
    cout << maxLength << endl;
    return 0;
}