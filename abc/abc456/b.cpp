#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    map<int, int> mp0;
    map<int, int> mp1;
    map<int, int> mp2;
    for(int j = 0; j < 6; ++j) {
        int x;
        cin >> x;
        ++mp0[x];
    }
    for(int j = 0; j < 6; ++j) {
        int x;
        cin >> x;
        ++mp1[x];
    }
    for(int j = 0; j < 6; ++j) {
        int x;
        cin >> x;
        ++mp2[x];
    }

    int count = 0;
    count += mp0[4] * mp1[5] * mp2[6] + mp0[4] * mp1[6] * mp2[5];
    count += mp0[5] * mp1[4] * mp2[6] + mp0[5] * mp1[6] * mp2[4];
    count += mp0[6] * mp1[4] * mp2[5] + mp0[6] * mp1[5] * mp2[4];

    double ans = (double)count / 216;
    cout << ans << endl;
    return 0;
}