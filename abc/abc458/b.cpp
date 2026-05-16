#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// u, d, l, r
vector<int> dj = {0, 0, -1, 1};
vector<int> di = {-1, 1, 0, 0};

int main(void) {
    // inputs
    int h, w;
    cin >> h >> w;

    // outputs
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            int count = 0;
            for(int k = 0; k < 4; ++k) {
                int x = j + dj[k];
                int y = i + di[k];
                if(0 <= x && x < w && 0 <= y && y < h) ++count;
            }
            cout << count;
            if(j < w - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}