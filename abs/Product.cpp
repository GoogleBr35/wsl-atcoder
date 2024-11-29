#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b;
    // 入力
    cin >> a >> b;
    // 出力
    if(a * b % 2) {
        // 奇数
        cout << "Odd" << endl;
    } else {
        // 偶数
        cout << "Even" << endl;
    }
}