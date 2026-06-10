#include <bits/stdc++.h>
using namespace std;

bool judge(string s, string t) {
    for(int i = 0; i < s.size(); i++) {
        // sを回転
        string work;
        work = s.substr(0, s.size() - 1);
        s = s[s.size() - 1] + work;
        // s, t比較
        if(s == t) return true;
    }
    return false;
}

int main(void) {
    // inputs
    string s, t;
    cin >> s;
    cin >> t;

    string ans = judge(s, t) ? "Yes":"No";
    // outputs
    cout << ans << endl;
    return 0;
}