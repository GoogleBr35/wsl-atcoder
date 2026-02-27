#include <bits/stdc++.h>
using namespace std;

string canMake(string s, string t) {
    // s'を作る (辞書順で最もはやい)
    sort(s.begin(), s.end());
    // t'を作る (辞書順で最もおそい)
    sort(t.begin(), t.end(), greater<int>());
    // s' < t' かどうか判定
    if(s < t) {
        return "Yes";
    } else {
        return "No";
    }   
}

int main(void) {
    // inputs
    string s, t;
    cin >> s;
    cin >> t;

    cout << canMake(s, t) << endl;
    return 0;
}