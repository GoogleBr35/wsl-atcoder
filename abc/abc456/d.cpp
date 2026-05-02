#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DIV 998244353

int main(void) {
    string s;
    cin >> s;

    ll count = s.size();
    if(s.size() >= 2) {
        int start = 0;
        while(start < s.size() - 1) {
            int i = start;
            int j = start + 1;
            char pre = s[i];
            char cur = s[j];
            // 違う文字が並ぶ区間
            while(pre != cur) {
                if(j + 1 > s.size()) break;
                ++i; ++j;
                pre = s[i]; cur = s[j];
            }
            // 同じ文字が並ぶ区間
            while(pre == cur) {
                if(j + 1 > s.size()) break;
                ++j;
                pre = s[j - 1]; cur = s[j];
            }
            // s[i] ~ s[j - 1]が同じ文字
            // 次の同じ文字が並ぶ箇所まで
            int end = j - 1;
            cur = s[end];
            char nex = s[end + 1];
            while(cur != nex) { 
                if(end + 1 > s.size()) break;
                ++end;
                cur = s[end]; nex = s[nex];
            }
            for(int k = 1; k < end - start; ++k) {
                count += k * (j - i);
            }
            start = j - 1;
        }
    }

    cout << count % DIV << endl;
    return 0;
}