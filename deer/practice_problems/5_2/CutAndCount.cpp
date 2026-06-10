#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    string s, x, y;
    cin >> s;

    int max = 0;

    for(int i = 1; i < n - 1; ++i) {
        x = s.substr(0, i); // 0 ~ iの文字列
        y = s.substr(i); // i+1 ~ n-1の文字列
        vector<bool> alphabet(26, false); // そのアルファベットが存在するかどうか
        // カウント
        for(int j = 0; j < x.size(); ++j) {
            char find = x[j];
            for(int k = 0; k < y.size(); ++k) {
                if(y[k] == find) alphabet[find - 'a'] = true;
            }
        }
        int count = 0;
        for(int j = 0; j < 26; ++j) if(alphabet[j]) ++count;
        max = (max >= count) ? max : count;
    }

    cout << max << endl;

    return 0;
}