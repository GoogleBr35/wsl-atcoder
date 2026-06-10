#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> P(m), Y(m);
    for(int i = 0; i < m; i++) {
        cin >> P[i] >> Y[i], --P[i];
    }

    vector<vector<int>> vals(n);
    for(int i = 0; i < m; i++) {
        vals[P[i]].push_back(Y[i]);
    }
    for(int i = 0; i < n; i++) {
        sort(vals[i].begin(), vals[i].end());
    }

    for(int i = 0; i < m; i++) {
        int pref = P[i];
        printf("%06d", pref + 1);

        int rank = lower_bound(vals[pref].begin(), vals[pref].end(), Y[i]) - vals[pref].begin();
        printf("%06d\n", rank + 1);
    }

    return 0;
}