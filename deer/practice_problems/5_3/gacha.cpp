#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    map<string, int> s;
    for(int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        ++s[x];
    }

    // outputs
    cout << s.size() << endl;
    return 0;
}