#include <bits/stdc++.h>
using namespace std;

string judge(vector<vector<int>> cost, int n) {
    int a, b, c;
    for(a = 0; a < n - 2; ++a) {
        for(b = a + 1; b < n - 1; ++b) {
            for(c = b + 1; c < n; ++c) {
                if(cost.at(a).at(c) > cost.at(a).at(b) + cost.at(b).at(c)) return "Yes";
            }
        }
    }
    return "No";
}

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<vector<int>> c(n, vector<int>(n, 0));
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            cin >> c.at(i).at(j);
        }
    }

    cout << judge(c, n) << endl;

    return 0;
}