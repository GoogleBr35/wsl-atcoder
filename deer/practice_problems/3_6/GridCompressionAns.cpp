#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int x, y;
    cin >> x >> y;
    vector<string> board(x);
    for(int i = 0; i < x; ++i) {
        cin >> board.at(i);
    }

    vector<bool> goodX(x, false), goodY(y, false);
    for(int i = 0; i < x; ++i) for(int j = 0; j < y; ++j) {
        if(board.at(i).at(j) == '#') {
            goodX.at(i) = true;
            goodY.at(j) = true;
        }
    }

    for(int i = 0; i < x; ++i) {
        if(goodX.at(i)) {
            for(int j = 0; j < y; ++j) {
                if(goodY.at(j)) cout << board.at(i).at(j);
            }
            cout << endl;
        }
    }

    return 0;
}