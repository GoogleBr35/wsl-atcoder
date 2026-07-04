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
    int direction = -1;
    for(int i = n - 1; i >= 0; --i) {
        if(s[i] == 'o') {
            cur += direction * (i + 1);
            direction *= -1;
        } else {
            cur += direction * 1; 
        }
        a[cur] = i + 1;
    }
    for(int i = 0; i < n - 1; ++i) {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
    return 0;
}