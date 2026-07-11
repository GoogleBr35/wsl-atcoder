#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> maxs(m, -1);
    for(int i = 0; i < n; ++i) {
        int c, s;
        cin >> c >> s;
        if(maxs[c-1] < s) maxs[c-1] = s;
    }
    for(int i = 0; i < m; ++i) {
        cout << maxs[i] << " ";
    }
    cout << endl;
    return 0;
}