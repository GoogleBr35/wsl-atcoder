#include <bits/stdc++.h>
using namespace std;

int main(void) {
    /*
    T 1122文字列
        |T| % 2 == 0
        1 <= i <= (|T| / 2), 2i-1 == 2i
        各文字ちょうど2個
    */

    // 入力
    string S;
    
    cin >> S;

    // 判定
    bool yes = false;
    bool over_appearance = false;
    map<char, bool> appearance_count;
    
    if(S.size() % 2) { // |T|が奇数なのでNo
        // 何もしない
    } else {
        for(int i_char = 0; i_char < S.size() / 2; i_char++) {
            if(S.at(i_char * 2) == S.at(i_char * 2 + 1)) { // 2i-1文字目と2i文字目が等しかったら
                yes = true;

                // 出現回数のカウントアップ
                if(appearance_count.count( S.at(i_char * 2) )) { // 1文字が3回以上出現しているので
                    over_appearance = true;  // flag = true
                } else {
                    appearance_count[S.at(i_char * 2)] = true; // 初出現の文字なのでmapに追加
                }
            } else {
                yes = false;
                break;
            }
        }
    }

    // 出力
    if(yes && !over_appearance) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}