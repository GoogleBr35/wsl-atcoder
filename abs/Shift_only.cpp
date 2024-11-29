#include <bits/stdc++.h>
using namespace std;
bool devide(vector<int> &A, int N, int &count) {
    bool flag_odd = false;
    for(int i = 0; i < N; i++) {
        if(A.at(i) % 2) {
        // 配列の値が奇数なら終了
            flag_odd = true;
            break;
        } else {
        // 配列の各値が偶数なら2で割る
            A.at(i) /= 2;
        }
    }
    if(!flag_odd) count++; // 配列の値全てが偶数なのでカウントアップ
    return flag_odd;
}

int main(void) {
    // 入力
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

/*
    //配列の最大値を求める
    int max = A.at(0);
    for(int j = 1; j < N; j++) {
        if(max < A.at(j)) {
            max = A.at(j);
        }
    }
*/

    // カウント
    int count = 0;
    while(true) { // 繰り返し回数は, 高々max回 (それより圧倒的に少ないはず)
        if(devide(A, N, count)) break;
    }

    // 出力
    cout << count << endl;
    return 0;
}