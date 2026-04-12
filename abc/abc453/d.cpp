#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> di = {-1, 1, 0, 0}; // U, D, L, R
vector<ll> dj = {0, 0, -1, 1};

void dfsVisit(int i, int j) {

}

string judge(int h, int w, vector<vector<ll>> board, int x, int y) {
    vector<ll> route;
    dfsVisit(x, y);
    
    return "No";
}

int main(void) {
    // inputs
    int h, w;
    cin >> h >> w;
    vector<vector<ll>> board(h, vector<ll>(w));
    ll startI, startJ;
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            cin >> board[i][j];
            if(board[i][j] == 'S') startI = i; startJ = j;
        }
    }

    // outputs
    cout << judge(h, w, board, startI, startJ) << endl;

    return 0;
}