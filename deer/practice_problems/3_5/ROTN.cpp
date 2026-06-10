#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    string s;
    cin >> n;
    cin >> s;

    // convert
    string ans = s;
    for(int i = 0; i < s.size(); i++) {
        char c;
        if(s[i] + n - 'A' > 25) {
        // s[i] + nが'Z'よりうしろを示すのとき
            // 繰り上がり
            c = s[i] + n - 26;
        } else {
            c = s[i] + n;
        }
        ans[i] = c;
    }

    // outputs
    cout << ans << endl;

    return 0;
}