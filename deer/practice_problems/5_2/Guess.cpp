#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;
    vector<int> digit(n, -1);
    vector<vector<int>> s(m, vector<int>(2));
    for(int i = 0; i < m; ++i) {
        cin >> s[i][0] >> s[i][1];
        if(digit[s[i][0] - 1] == -1 || digit[s[i][0] - 1] == s[i][1]) digit[s[i][0] - 1] = s[i][1];
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    if(n >= 2 && digit[0] == 0) {
        cout << -1 << endl;
        return 0;
    }
    if(n >= 2 && digit[0] == -1) {
        digit[0] = 1;
    }
    if(n == 1 && digit[0] == -1){
        digit[0] = 0;
    }
    for(int i = 0; i < n; ++i) {
            if(digit[i] != -1) cout << digit[i];
            else cout << 0;
    }
    cout << endl;
    return 0;
}