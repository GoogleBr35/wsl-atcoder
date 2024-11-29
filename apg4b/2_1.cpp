#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> data(5);
    for(int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // dataの中で隣り合う等しい要素が存在するなら
    // "YES"を出力し、そうでなければ"NO"を出力する
    for(int j = 1; j < 5; j++) {
        if(data.at(j) == data.at(j - 1)) {
            cout << "YES" << endl;
            break;
        }
        if(j == 4) cout << "NO" << endl;
    }
}