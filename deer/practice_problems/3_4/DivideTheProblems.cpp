#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    cin >> n;
    if(n % 2 == 1) {// 奇数個のとき
        cout << 0 << endl; // 二分できない
        return 0;
    }
    vector<int> d(n);
    for(int& x : d) cin >> x;

    sort(d.begin(), d.end()); // 低い順にソート
    int index = n / 2 - 1; // 中央値 (低い方) のインデックス
    if(d.at(index) == d.at(index + 1)) { // 中央の2値が同じとき
        cout << 0 << endl; // 2分できない
    } else { // 中央の2値が異なるとき
        // 中央値 (低い方) 以降、中央値 (高い方) 以下がパターン数
        int pattern = d.at(index + 1) - d.at(index);
        cout << pattern << endl;
    }

    return 0;
}