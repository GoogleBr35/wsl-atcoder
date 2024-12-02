#include <bits/stdc++.h>
#define rep(i, N) for(int i = 0; i < N; i++)

using namespace std;

int main(void) {
    // input
    int N;
    cin >> N;
    vector<int> d(N);
    set<int> kagami;

    // 入力をstl::setに追加していく
    rep(i, N) { // 計算量がO(N * logN) 結果: 4ms
        cin >> d.at(i);
        kagami.insert(d.at(i));
    }
    /* 
    // 計算量がO(N + logN) = O(N) 結果: 1ms
    rep(i, N) cin >> d.at(i);
    rep(i, N) kagami.insert(d.at(i));
    */

    // output
    cout << kagami.size() << endl;
    return 0;
}