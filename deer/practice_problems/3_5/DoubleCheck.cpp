#include <bits/stdc++.h>
using namespace std;

bool hasAlphabet(string s) {
    // 0123456789
    // 0
    for(int i = 0; i < s.size(); i++) {
        if(s.at(i) - '0' < 0 || s.at(i) - '0' > 9) return true;
    }
    return false;
}

int main(void) {
    // inputs
    string s;
    cin >> s;

    // 英子文字含むかどうかチェック
    if(hasAlphabet(s)) {
        // 含むなら"error"
        cout << "error" << endl;
    } else {
        // 含まないなら2倍にして出力
        cout << stoi(s) * 2 << endl;
    }
    return 0;
}