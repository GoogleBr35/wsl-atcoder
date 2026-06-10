#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (int k = 0; k < N; k++) cin >> A[k];
    for (int k = 0; k < M; k++) cin >> B[k];

    // if B[k] >= A[l] then B[k] can be eaten by A[l]
    // for(int j = 0; j < M; j++) {
    //     for(int i = 0; i < N; i++) {
    //         if(B[j] >= A[i]) {
    //             cout << i + 1 << endl;
    //             break;
    //         }
    //         if(i == N - 1) cout << -1 << endl;
    //     }
    // }

    // A_0, ..., A_Nを降順に整形
    for(int i = 0; i < N - 1; i++) {
        A[i + 1] = min(A[i + 1], A[i]);
    }

    // B[j] >= A[i] となる最小のiを出力
    for(int j = 0; j < M; j++) {
        // 降順でAをソート
        // lower_boundでB[j]以下の最大のA[i]を探す
        auto it = lower_bound(A.begin(), A.end(), B[j], greater<int>());
        if(it == A.end()) cout << -1 << endl;
        else cout << (it - A.begin()) + 1 << endl;
    }

    return 0;
}