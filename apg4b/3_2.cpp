#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // pair (ai, bi) の個数の入力
    int N;
    cin >> N;

    // 各pairの値の入力
    vector<pair<int, int>> pairs(N);
    int ai_in, bi_in; // 入力の受付用変数
    for(int pi = 0; pi < N; pi++) {
        cin >> ai_in >> bi_in;
        pairs.at(pi) = make_pair(bi_in, ai_in); // 入力を入れ替えて配列に格納
    }

    // bについて昇順に並び替え
    sort(pairs.begin(), pairs.end());

    // 各pairの値の出力
    int ai_out, bi_out;
    for(int pi = 0; pi < N; pi++) {
        tie(bi_out, ai_out) = pairs.at(pi);
        cout << ai_out << " " << bi_out << endl;
    }

    return 0;
}