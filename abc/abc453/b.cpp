#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int t, x;
    cin >> t >> x;
    vector<int> a(t + 1);
    for(auto &x:a) {
        cin >> x;
    }

    cout << 0 << " " << a[0] << endl;
    int stored = a[0];
    for(int i = 1; i < t + 1; ++i) {
        bool isStored = false;
        int dif = a[i] - stored;
        if(dif < 0) dif = -dif;
        if(dif >= x) isStored = true;
        if(isStored) {
            cout << i << " " << a[i] << endl;
            stored = a[i];
        }
    }
    return 0;
}