#include <bits/stdc++.h>
#include <string.h>

using namespace std;

string x[4] = {"dream", "dreamer", "erase", "eraser"};

int main(void) {
    string S;

    cin >> S;

    // 反転
    reverse(S.begin(), S.end());
    for(int i = 0; i < 4; i++) {
        reverse(x[i].begin(), x[i].end());
    }

    bool is_able = true;
    for(int i = 0; i < S.size();) {
        bool is_match = false;
        for(int j = 0; j < 4; j++) {
            string x_s = x[j];
            if(S.substr(i, x_s.size()) == x_s) {
                is_match = true;
                i += x_s.size();
            }
        }
        if(!is_match) {
            is_able = false;
            break;
        }
    }

    if(is_able) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}