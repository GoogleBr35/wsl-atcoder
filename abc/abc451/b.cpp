#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;
    vector<int> a(m, 0); // 今期
    vector<int> b(m, 0); // 来期
    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x;
        cin >> y;
        a[x - 1]++; b[y - 1]++;
    }

    // outputs
    for(int i = 0; i < m; ++i) {
        cout << b[i] - a[i] << endl;
    }

    return 0;
}