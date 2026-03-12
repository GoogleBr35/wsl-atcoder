#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    string s, t;
    cin >> s;
    cin >> t;

    // as default: size(t)
    int ans = t.size();
    for(int i = 0; i < s.size() - t.size() + 1; ++i) {
        int count = 0;
        for(int j = 0; j < t.size(); ++j) {
            if(s.at(i + j) != t.at(j)) ++count;
        }
        ans = min(ans, count);
    }

    // outputs
    cout << ans << endl;

    return 0;
}