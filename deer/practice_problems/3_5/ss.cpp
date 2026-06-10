#include <bits/stdc++.h>
using namespace std;

bool judge(string s) {
    string a, b;
    int n = s.size();
    a = s.substr(0, n / 2); b = s.substr(n / 2);
    if(a == b) return true;
    return false;
}

int main(void) {
    // inputs
    string s;
    cin >> s;

    int ans;
    while (true) {
        // sの末尾1文字を削除
        s = s.erase(s.size() - 1);
        // 偶文字列判定
        if (s.size() % 2 == 0 && judge(s)) {
            // 偶文字ならその文字列の長さを取得
            ans = s.size();
            break;
        }
    }

    // outputs
    cout << ans << endl;

    return 0;
}