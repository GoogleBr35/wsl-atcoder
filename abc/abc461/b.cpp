#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    vector<int> a;
    vector<int> b;
    cin >> n;
    a.resize(n); b.resize(n);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[i] = x-1;
    }
    for(int i = 0; i < n; ++i) {
        int y;
        cin >> y;
        b[i] = y-1;
    }

    bool isFalsy = false;
    for(int i = 0; i < n; ++i) {
        if(b[a[i]] != i) {
            isFalsy = true;
            break;
        }
    }

    // outputs
    if(isFalsy) cout << "No" << endl;
    else cout << "Yes" << endl;
    
    return 0;
}