#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// u, d, l, r
vector<int> dj = {0, 0, -1, 1};
vector<int> di = {-1, 1, 0, 0};

int main(void) {
    // inputs
    string s;
    cin >> s;

    ll count = 0;
    ll len = s.length();
    ll mid = (len + 1) / 2 - 1; // 0-indexed
    for(int i = 0; i < len; ++i) {
        if(s[i] == 'C') {
            if(i <= mid) {
                count += i + 1;
            } else {
                count += len - i;
            }
        }
    }

    // outputs
    cout << count << endl;
    
    return 0;
}