#include <bits/stdc++.h>
using namespace std;

string judge(string s, string t) {
    if(s == t) return "Yes";
    for(int i = 0; i < s.size() - 1; i++) {
        string work = s.substr(0, i) + s[i + 1] + s[i] + s.substr(i + 2);
        if(work == t) {
            return "Yes";
        }
    }
    return "No";
}

int main(void) {
    // inputs
    string s, t;
    cin >> s;
    cin >> t;

    // outputs
    cout << judge(s, t) << endl;
    return 0;
}