#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    map<string, int> s;
    vector<int> ans;
    for(int i = 1; i <= n; ++i) {
        string x;
        cin >> x;
        ++s[x];

        if(s[x] == 1) ans.push_back(i);
    }

    // outputs
    for(auto x:ans) cout << x << endl;
    return 0;
}