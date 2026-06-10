#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // in @ null .
    int N, D;
    cin >> N >> D;
    string S;
    cin >> S;

    int count_default = 0;
    // Count the number of '.' in the string S
    for (int i = 0; i < N; i++) {
        if (S[i] == '.') {
            count_default++;
        }
    }
    // The number of '.' at first + D is the answer: the number of empty boxes
    int ans = D + count_default;
    cout << ans << endl;

    return 0;
}