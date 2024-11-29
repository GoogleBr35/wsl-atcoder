#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 果物の個数、合計金額の入力
    int N, S;
    cin >> N >> S;
    // リンゴ、パイナップルの各値段の入力
    vector<int> Apple(N), Pineapple(N);
    for(int i = 0; i < N; i++) {
        cin >> Apple.at(i);
    }
    for(int i = 0; i < N; i++) {
        cin >> Pineapple.at(i);
    }
    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか 
    int patterns = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(Apple.at(i) + Pineapple.at(j) == S) patterns++;
        }
    }
    /* 範囲for文を使うと　※x, yに配列の値がコピーされることに注意
    for(int x : Apple) {
        for(int y : Pineapple) {
            if(x + y == S) patterns++;
        }
    }
    */
    cout << patterns << endl;
}