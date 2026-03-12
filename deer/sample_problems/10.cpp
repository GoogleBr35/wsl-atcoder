#include <bits/stdc++.h>
using namespace std;
/*
    123
    4 5
    678
*/
vector<int> dy = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<int> dx = {-1, 0, 1, -1, 1, -1, 0, 1};

char searchBomb(vector <vector <char>> board, int y, int x) {
    int count = 0;
    for(int i = 0; i < 8; ++i) {
        int newY = y + dy.at(i);
        int newX = x + dx.at(i);
        // 範囲外
        if(newY < 0 || newY >= board.size() || newX < 0 || newX >= board.at(0).size()) continue;

        // 爆弾のとき
        if(board.at(newY).at(newX) == '#') ++count;
    }
    char countChar = count + '0';
    return countChar;
}

int main(void) {
    // intputs
    int height, width;
    cin >> height >> width;
    vector <vector<char>> board(height, vector<char>(width));
    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
            cin >> board.at(i).at(j);
        }
    }
    
    // calculate
    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
            if(board.at(i).at(j) != '#') {
                // 爆弾でないとき
                char countChar = searchBomb(board, i, j);
                cout << countChar;
            } else {
                // 爆弾 (#) のとき
                cout << '#';
            }
        }
        cout << endl;
    }

    return 0;
}