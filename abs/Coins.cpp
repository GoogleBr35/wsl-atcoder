#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 入力
    int A, B, C, X;
    
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    // 全探索
    int counter = 0;

    for(int i_A = 0; i_A <= A; i_A++) {
        for(int i_B = 0; i_B <= B; i_B++) {
            for(int i_C = 0; i_C <= C; i_C++) {
                if(500 * i_A + 100 * i_B + 50 * i_C == X) counter++;
            }
        }
    }

    // 出力
    cout << counter << endl;
    return 0;
}