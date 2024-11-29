#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 1行で入力を受け付け
    string s;
    cin >> s;
    // 計算
    int sum = 1; // 最初の入力は必ず1なので1で初期化
    for(int i = 1; i < s.size();) {
        if(s.at(i) == '+') sum += 1; // +
        else if(s.at(i) == '-') sum -= 1; // -
        i += 2; // 次の演算子までスキップ
    }
    // 結果の出力
    cout << sum << endl;
}