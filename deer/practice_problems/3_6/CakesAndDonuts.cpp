#include <bits/stdc++.h>
using namespace std;

string judge(int n) {
    for(int i = 0; i * 7 <= n; ++i) {
        for(int j = 0; (i * 7 + j * 4) <= n; ++j) {
            if(i * 7 + j * 4 == n) return "Yes";
        }
    }
    return "No";
}

int main(void) {
    // inputs
    int n;
    cin >> n;

    // outputs
    cout << judge(n) << endl;
    
    return 0;
}