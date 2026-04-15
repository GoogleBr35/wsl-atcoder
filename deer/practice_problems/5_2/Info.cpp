#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    vector<vector<int>> c(3, vector<int>(3));
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) cin >> c[i][j];
    }

    vector<int> a, b;
    a.resize(3);
    b.resize(3);

    bool isCorrect = false;
    for(int i = 0; i <= c[0][0]; ++i) {
        int correctCounter = 0;
        a[0] = i; // a_0を決め打ち
        // b_jが確定
        b[0] = c[0][0] - i; b[1] = c[0][1] - i; b[2] = c[0][2] - i;
        // a_iが確定
        a[1] = c[1][0] - b[0]; a[2] = c[2][0] - b[0];
        for(int j = 0; j < 3; ++j) {
            if(c[0][j] == a[0] + b[j]) ++correctCounter;
        }
        for(int j = 0; j < 3; ++j) {
            if(c[1][j] == a[1] + b[j]) ++correctCounter;
        }
        for(int j = 0; j < 3; ++j) {
            if(c[2][j] == a[2] + b[j]) ++correctCounter;
        }
        if(correctCounter == 9) {
            isCorrect = true;
            break;
        }
    }

    // outputs
    cout << (isCorrect ? "Yes" : "No") << endl;

    return 0;
}