#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    string s;
    cin >> s;

    int ans = 0;
    int len = s.size();
    if(len % 2 != 0) {
        // 文字列の長さが奇数のとき
        for(int i = 1; i <= len / 2; i++) {
            if(s[len / 2 - i] != s[len / 2 + i]) ans++;
        }
    } else {
        // 文字列の長さが偶数のとき
        for(int i = 0; i < len / 2; i++) {
            if(s[len / 2 - (i + 1)] != s[len / 2 + i]) ans++;
        }
    }

    // outputs
    cout << ans << endl;
    return 0;
}