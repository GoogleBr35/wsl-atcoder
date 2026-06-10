#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<vector<int>> abcd(4, vector<int>(2)); // abcd[i][0] = {a/b/c/d}, abcd[i][1] = {-/+}
    abcd[3][0] = n % 10; n /= 10;
    abcd[2][0] = n % 10; n /= 10;
    abcd[1][0] = n % 10; n /= 10;
    abcd[0][0] = n % 10;

    // outputs
    for(int bit = 0; bit < (1 << 3); ++bit) {
        int result = abcd[0][0]; // a
        for(int i = 1; i < 4; ++i) {
            if((bit >> i - 1) & 1) {
                // 正
                result += abcd[i][0];
                abcd[i][1] = 1;
            } else {
                // 負
                result -= abcd[i][0];
                abcd[i][1] = -1;
            }
        }
        if(result == 7) break;
    }
    for(int i = 0; i < 4; ++i) {
        if(0 < i) {
            if(abcd[i][1] == 1) cout << '+';
            if(abcd[i][1] == -1) cout << '-';
        }
        cout << abcd[i][0];
    }
    cout << "=7" << endl;

    return 0;
}