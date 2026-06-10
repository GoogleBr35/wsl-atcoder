#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != s[s.size() - 1 - i]) ans++;
    }
    // outputs
    cout << ans / 2 << endl;
    return 0;
}