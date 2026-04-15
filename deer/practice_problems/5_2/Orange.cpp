#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000; // gram変換

    int minimum = 1000001;
    int maximum = -1;
    for(int n = 1; n <= 1000000; ++n) {
        if(a * n <= w && w <= b * n) {
            minimum = min(minimum, n);
            maximum = max(maximum, n);
        }
    }

    // outputs
    if(maximum < 0) cout << "UNSATISFIABLE" << endl;
    else cout << minimum << " " << maximum << endl;
    return 0;
}