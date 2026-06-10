#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    int minM = 100000; // 最小のお菓子の素
    for(int& x : m) {
        cin >> x;
        minM = min(minM, x); // 最小値を更新
    }

    // sum = m1 + ... + mNを求める
    int sum = 0;
    for(int y : m) sum += y;
    // 残りでminMを何個作れるか求める
    int numOfminM = (x - sum) / minM; 

    // outputs
    cout << n + numOfminM << endl;

    return 0;
}