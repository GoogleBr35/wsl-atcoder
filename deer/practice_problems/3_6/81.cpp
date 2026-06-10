#include <bits/stdc++.h>
using namespace std;

string judge(int n) {
    for(int i = 1; i <= 9; ++i) {
        for(int j = 1; j <= 9; ++j) {
            if(n == j * i) return "Yes";
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