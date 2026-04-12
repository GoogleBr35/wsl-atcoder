#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool judge(int bit, int n, vector<int> a, int w) {
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        if((bit >> i) & 1) {
            sum += a[i];   
        }
    }
    if(sum == w) return true;
    return false;
}

int main(void) {
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for(auto &x:a) cin >> x;

    for(int i = 0; i < (1 << n); ++i) {
        if(judge(i, n, a, w)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}