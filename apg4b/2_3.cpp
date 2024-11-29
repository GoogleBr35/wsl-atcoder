#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for(int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector <char>> table(N, vector<char>(N, '-')); // 2次元N * N配列
    for(int i = 0; i < M; i++) {
        table.at(A.at(i) - 1).at(B.at(i) - 1) = 'o'; // 試合結果 "x y" はインデックス+1のことに注意
        table.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
    }

    // 表の出力
    for(int i = 0; i < table.size(); i++) {
        for(int j = 0; j < table.at(i).size(); j++) {
            cout << table.at(i).at(j);
            if(j == table.at(i).size() - 1) cout << endl;
            else cout << " ";
        }
    }
}