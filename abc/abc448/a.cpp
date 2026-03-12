#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(auto& v:a) cin >> v;

    // outputs
    for(int i = 0; i < n; i++) {
        bool isLessThanX = false;
        if(a.at(i) < x) {
            x = a.at(i);
            isLessThanX = true;
        }
        cout << isLessThanX << endl;
    }
    return 0;
}