#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<int> a(n);
    int cur = n;
    int mid = n / 2 + 1; 
    for(int i = n - 1; i >= 0; --i) {
        if(s[i] == 'o') {
            if(mid <= cur) {
                cur -= i + 1;
            } else {
                cur += i + 1;
            }
        } else {
            if(mid <= cur) {
                --cur;
            } else {
                ++cur;
            } 
        }
        a[cur] = i + 1;
    }
    for(int i = 0; i < n - 1; ++i) {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
    return 0;
}