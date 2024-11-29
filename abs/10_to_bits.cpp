#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N; // 変換前
    cin >> N;

    // 変換
    stack<int> bits;
    while(N >= 1) {
        bits.push(N % 2);
        N /= 2;
    }

    // 出力
    while(bits.size() > 0) {
        cout << bits.top();
        bits.pop();
    }
    cout << endl;
    return 0;
}