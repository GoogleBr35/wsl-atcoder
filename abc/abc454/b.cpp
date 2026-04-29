#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;
    vector<int> f(n);
    for(int i = 0; i < n; ++i) {
        cin >> f[i];
        --f[i];
    }

    bool isDifferent = true;
    vector<bool> isAlreadyWear1(m, false);
    for(int i = 0; i < n; ++i) {
        if(!isAlreadyWear1[f[i]]) isAlreadyWear1[f[i]] = true;
        else isDifferent = false;
    }

    bool isAtLeastOne = true;
    vector<bool> isAlreadyWear2(m, false);
    for(int i = 0; i < n; ++i) {
        if(!isAlreadyWear2[f[i]]) isAlreadyWear2[f[i]] = true;
    }
    for(int i = 0; i < m; ++i) {
        if(!isAlreadyWear2[i]) isAtLeastOne = false;
    }

    // outputs
    if(isDifferent) cout << "Yes" << endl;
    else cout << "No" << endl;
    if(isAtLeastOne) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}