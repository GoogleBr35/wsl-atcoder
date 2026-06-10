#include <bits/stdc++.h>
using namespace std;

double distance(vector<int> a, vector<int> b, int d) {
    double x = 0;
    for(int i = 0; i < d; ++i) {
        x += (a.at(i) - b.at(i)) * (a.at(i) - b.at(i));
    }
    return sqrt(x);
}

int main(void) {
    // inputs
    int n, d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < d; ++j) {
            cin >> x.at(i).at(j);
        }
    }

    // (i, j)間の距離の計算
    int count = 0;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            double dis;
            dis = distance(x.at(i), x.at(j), d);
            // 整数判定
            if(dis -(int)dis == 0) ++count;
        }
    }

    // outputs
    cout << count << endl;
    
    return 0;
}