#include <bits/stdc++.h>
using namespace std;

string bingo(vector<vector<int>> a, vector<int> b, int n) {
    int count = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 3; ++j) {
            for(int k = 0; k < 3; ++k) {
                if(a.at(j).at(k) == b.at(i)) {
                    a.at(j).at(k) = 0;
                    ++count;
                }
            }
        }
    }
    if(count < 3) return "No";
    // 縦
    for(int i = 0; i < 3; ++i) {
        if(a.at(0).at(i) == 0) {
            if(a.at(1).at(i) == 0 && a.at(2).at(i) == 0) return "Yes";
        }
    }
    // 横
    for(int i = 0; i < 3; ++i) {
        if(a.at(i).at(0) == 0) {
            if(a.at(i).at(1) == 0 && a.at(i).at(2) == 0) return "Yes";
        }
    }
    // ななめ
    if(a.at(1).at(1) != 0) return "No";
    else if(a.at(0).at(0) == 0 && a.at(2).at(2) == 0) return "Yes";
    else if(a.at(0).at(2) == 0 && a.at(2).at(0) == 0) return "Yes";
    else return "No";
}

int main(void) {
    // inputs
    vector<vector<int>> a(3, vector<int>(3));
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> a.at(i).at(j);
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for(auto& x:b) cin >> x;

    // outputs
    cout << bingo(a, b, n) << endl;

    return 0;
}