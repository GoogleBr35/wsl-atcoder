#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 入力
    int N;

    cin >> N;

    // 判定
    bool yes = true;
    string N_str = to_string(N);
    vector<int> counter(3, 0);

    for(int i = 0; i < 6; i++) {
        switch(N_str.at(i)) {
            case '1': {
                counter.at(0)++;
                break;
            } case '2': {
                counter.at(1)++;
                break;
            } case '3': {
                counter.at(2)++;
                break;
            } default: {
                // 何もしない
            }
        }
    }
    for(int j = 0; j < 3; j++) {
        if(counter.at(j) != j + 1) yes = false;
    }
    

    // 出力
    if(yes) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}