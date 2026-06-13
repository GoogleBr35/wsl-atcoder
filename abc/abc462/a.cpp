#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    string s;
    cin >> s;

    vector<int> ans;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] - '0' >= 0 && s[i] - '0' <= 9) ans.push_back(s[i] - '0');
    }
    for(int i = 0; i < ans.size(); ++i) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}