#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    string s;
    cin >> s;
    int n;
    cin >> n;

    int len = s.length();
    string ans = s.substr(n, len - n * 2);

    // outputs
    cout << ans << endl;
    
    return 0;
}