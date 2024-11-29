#include <bits/stdc++.h>
using namespace std;

int main(void) {
    /*
    vector<型> 配列名(要素数) -> 宣言
    for() cin >> vec.at(i);  -> 入力
    配列名.push_back(x);     -> 配列の末尾にxを追加
    配列名.pop_back();       -> 配列の末尾の要素を削除
    vec1 == vec2             -> 配列同士の比較
    */
    
    int N;
    cin >> N;

    // 得点の入力
    vector<int> score(N);
    for(int i = 0; i < N; i++) {
        cin >> score.at(i);
    }

    // 平均の計算
    int sum = 0;
    for(int j = 0; j < N; j++) {
        sum += score.at(j);
    }
    int average = sum / N;

    // 平均とのキョリ
    for(int k = 0; k < N; k++) {
        if(average <= score.at(k)) cout << score.at(k) - average << endl; // 平均 <= 得点
        else cout << average - score.at(k) << endl;                       // 平均 > 得点
    }
}