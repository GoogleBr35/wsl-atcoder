#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    vector<int> x(n);
    bool isSad = true;
    for(int i = 0; i < n; ++i) {
        int xi;
        cin >> xi;
        if(xi >= 0) isSad = false;
    }
    string ans = (isSad) ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}