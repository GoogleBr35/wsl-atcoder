#include <bits/stdc++.h>
using namespace std;

bool judge(int a, int b, string s) {
    // 文字数がa + b + 1かどうか
    if(s.size() != a + b + 1) return false;
    // a + 1文字目がハイフンかどうか
    if(s[a] != '-') return false;
    // 1 ~ a文字が数字かどうか
    for(int i = 0; i < a; i++) {
        if(s[i] - '0' < 0 || s[i] - '0' > 9) return false;
    }
    // a + 2 ~ a + b + 1文字が数字かどうか
    for(int i = a + 1; i < a + b + 1; i++) {
        if(s[i] - '0' < 0 || s[i] - '0' > 9) return false;
    }
    return true;
}

int main(void) {
    // inputs
    int a, b;
    string s;
    cin >> a >> b;
    cin >> s;

    // outputs
    string ans = judge(a, b, s) ? "Yes" : "No";
    cout << ans << endl;
    
    return 0;
}