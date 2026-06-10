#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int height, width, x, y;
    cin >> height >> width >> x >> y;
    vector<vector<char>> s(height, vector<char> (width));
    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
            cin >> s.at(i).at(j);
        }
    }

    int count = 0;
    // 上 (x, y)含む
    for(int i = 0; i < x; ++i) {
        // 障害物
        if(s[x-1-i][y-1] == '#') break;
        ++count;
    }
    // 下
    for(int i = 1; x - 1 + i < height; ++i) {
        // 障害物
        if(s[x-1+i][y-1] == '#') break;
        ++count;
    }
    // 左
    for(int i = 1; i < y; ++i) {
        // 障害物
        if(s[x-1][y-1-i] == '#') break;
        ++count;
    }
    // 右
    for(int i = 1; y - 1 + i < width; ++i) {
        // 障害物
        if(s[x-1][y-1+i] == '#') break;
        ++count; 
    }

    // outputs
    cout << count << endl;
    
    return 0;
}