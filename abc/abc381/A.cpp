#include <bits/stdc++.h>
using namespace std;

int main(void) {
    /*
    T 11/22文字列
        T % 2 == 1
        (|T|+1) / 2 - 1 まで == 1
        (|T|+1) / 2 == '/'
        (|T|+1) / 2 + 1 から == 2
    */

    // 入力
    unsigned int N;
    string S;

    cin >> N;
    cin >> S;

    // 判定
    bool flag = false;

    if(N % 2 == 0) { // 偶数なのでNo
    } else if(S.at((N - 1) / 2) != '/') { // (|T|+1) / 2 == '/'じゃないのでNo
    } else if(N == 1 && S == "/") { // '/'はYesに含まれる
        flag = true;
    } else {
        for(int i_char = 0; i_char < ((N - 1) / 2); i_char++) {
            if(S.at(i_char) == '1' && S.at(N - 1 - i_char) == '2') {
                flag = true;
            } else {
                flag = false;
                break;
            }
        }
    }

    // 出力
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}