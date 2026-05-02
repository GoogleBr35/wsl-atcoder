#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DIV 998244353

int main(void) {
    string s;
    cin >> s;

    ll count = s.size();
    if(s.size() >= 2) {
        int i = 0;
        while(i < s.size() - 1) {
            int j = i + 1;
            char pre, cur;
            cur = s[j];
            pre = s[j - 1];
            while(pre != cur) {
                if(j + 1 > s.size()) break;
                ++j;
                cur = s[j];
                pre = s[j - 1];
            }
            int difLen = j - i;
            for(int k = 1; k < difLen; ++k) {
                count += k;
            }
            i = j;
        }
    }

    cout << count % DIV << endl;
    return 0;
}