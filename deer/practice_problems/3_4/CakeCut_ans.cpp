#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> a(1 << 19), b(1 << 19);

int main(void) {
    // inputs
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    // make vector B
    for(int i = 1; i <= n; i++) b[i] = b[i - 1] + a[i];
    for(int i = 1; i <= n; i++) b[i + n] = b[i + n - 1] + a[i];
    if(b[n] % 10LL != 0LL) {
        cout << "No" << endl;
        return 0;
    }

    // search
    for(int i = 0; i <= n; i++) {
        long long goal = b[i] + b[n] / 10LL;
        int pos1 = lower_bound(b.begin(), b.begin() + 2 * n + 1, goal) - b.begin();
        if(b[pos1] == goal) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}