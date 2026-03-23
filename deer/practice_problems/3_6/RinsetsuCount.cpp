#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; ++i) {
        cin >> s.at(i);
    }

    vector<int> dx = {-1, -1, -1,  0, 0, 0,  1, 1, 1};
    vector<int> dy = {-1,  0,  1, -1, 0, 1, -1, 0, 1};
    vector ans(h, vector<int>(w));
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            int count = 0;
            for(int k = 0; k < 9; ++k) {
                int x = i + dx.at(k);
                int y = j + dy.at(k);
                if(x >= 0 && y >= 0 && x < h && y < w) {
                    if(s.at(x).at(y) == '#') ++count;
                }
            }
            ans.at(i).at(j) = count;
        }
    }

    // outputs
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
        cout << ans.at(i).at(j);
        }
        cout << endl;
    }

    return 0;
}