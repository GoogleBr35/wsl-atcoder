#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 入力
    string s;
    cin >> s;

    // カウント
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s.at(i) == '1') ans++;
    }

    // 出力
    cout << ans << endl;
}