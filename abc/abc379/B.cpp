#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;

    int counter = 0;
    int i, j;
    bool canEat = true;
    for(i = 0; i < N; i++) {
        if(S[i] != 'X') { // S[i] != 'x' のとき
            // S[i] ~ S[i+K-1] まで走査
            for(j = 1; j < K; j++) {
                // その範囲に 'x' があれば食べられない
                if(S[i + j] == 'X' || i + j >= N) {
                    canEat = false;
                    i = i + j;
                }
            }
            if(canEat) {
                // 食べられるのでカウントアップ
                counter++;
                // インデックスをi+Kに変更させるため、i+K-1へ 
                i = i + K - 1;
            }
        }
        canEat = true;
    }
    cout << counter << endl;
    return 0;
}