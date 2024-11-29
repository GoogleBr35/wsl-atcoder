#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 入力
    int N, A, B;

    cin >> N >> A >> B;

    /*
    N % 10 -> add to subtotal
    N / 10
    N % 10 -> add to subtotal
    N / 10
    ...
    と実装すると他の桁のときも応用が利くし、簡単
     */

    // 全探索
    int some_sums = 0;
    string N_str;
    vector<int> each_digit(5, 0);

    for(int i = 1; i <= N; i++) {
        int subtotal = 0;
        
        N_str = to_string(i);
        for(int digit_index = 0; digit_index < N_str.size(); digit_index++) { // 各桁を配列に格納
            each_digit.at(digit_index) = int(N_str.at(digit_index)-'0'); // char (N_strの各値) -> int
        }
        for(int j = 0; j < 5; j++) { // 各桁の和
            subtotal += each_digit.at(j);
            each_digit.at(j) = 0; // 配列の初期化
        }
        if(A <= subtotal && subtotal <= B) {
            some_sums += i;
        }
    }

    // 出力
    cout << some_sums << endl;
    return 0;
}