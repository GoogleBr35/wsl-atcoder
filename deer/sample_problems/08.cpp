#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    string s;
    cin >> s;

    // judgement
    bool isAC = false;
    if(s[0] == 'A' ) {
        string sub = s.substr(2, s.size() - 3); // S の先頭から3文字目と末尾から2文字目
        int count = 0; // 'C'のカウンタ
        int index; // 'C'がどこにあるか
        for(int i = 0; i < sub.size(); i++) {
            if(sub[i] == 'C') {
                count++;
                index = i;
            }
        }
        if(count == 1) {
            isAC = true;
            for(int i = 1; i < s.size(); i++) {
                if(i != index + 2 && isupper(s[i])) {
                    isAC = false;
                }
            }
        }
    }

    // outputs
    string ans = (isAC) ? "AC" : "WA";
    cout << ans << endl;

    return 0;
}