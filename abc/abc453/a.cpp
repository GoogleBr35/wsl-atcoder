#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    string s;
    cin >> n;
    cin >> s;

    int index = 0;
    for(; index < n; ++index) {
        if(s[index] != 'o') break;
    }

    // outputs
    if(index == n) cout << "" << endl;
    else for(int i = index; i < n; ++i) {cout << s[i]; }cout << endl;

    return 0;
}