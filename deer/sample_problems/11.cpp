#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, yen;
    cin >> n >> yen;

    for(int a = 0; a <= n; ++a) for(int b = 0; b <= n; ++b) {
        int c = n - a - b;
        if(c < 0 || c > n) continue;
        if(a * 10000 + b * 5000 + c * 1000 == yen) {
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
    }

    // outputs
    cout << -1 << " " << -1 << " " << -1 << endl;

    return 0;
}