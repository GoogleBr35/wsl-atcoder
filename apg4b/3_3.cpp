#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 要素数Nの入力
    uint32_t N;

    cin >> N;

    // 配列の各値の入力
    unordered_map<uint32_t, uint32_t> a;
    uint32_t ai; // 入力を受け取る変数

    for(uint32_t i = 0; i < N; i++) {
        cin >> ai; // 入力
        if(a.count(ai)) {
            a.at(ai)++;
        } else {
            a[ai] = 1; // mapに追加、初出現なのでvalueは1
        }
    }

    // 出現回数が最も多いkeyを探す (そのvalueが出現回数) 
    uint32_t max_appear_num; // 出現回数が最も多い値
    uint32_t max_appear_count = 0; // その回数
    
    for (auto p : a) {
        if(p.second > max_appear_count) { // 出現回数がより多いkeyがあったら
            max_appear_num = p.first; // 出現回数が暫定最多のkeyを更新
            max_appear_count = p.second; // 暫定で最多の出現回数を更新
        }
    }

    // 出現回数の出力
    cout << max_appear_num << " " << max_appear_count << endl;    
    return 0;
}