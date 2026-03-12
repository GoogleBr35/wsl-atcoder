#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;

int main(void) {
    // inputs
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto& x:a) cin >> x;
    for(int i = 0; i < q; ++i) {
        // query_iのinput
        int k;
        cin >> k;
        queue<int> b;
        for(int j = 0; j < k; ++j) {
            int y;
            cin >> y;
            b.push(y);
        }
        vector<int> a_dash(n, INF); // コピー用の配列
        int min = INF;
        int index = 0;
        for(int j = 0; j < k; ++j) {
            int ignore = b.front() - 1;
            for(int l = index; l < ignore; ++l) {
                // b.at(i) - 1 番目のボールを除いてコピー
                a_dash.at(l) = a.at(l);
            }
            index = ignore + 1;
            b.pop();
            if(b.empty()) {
                for(int l = index; l < n; ++l) {
                    // b.at(k) 番目から終わりまでコピー
                    a_dash.at(l) = a.at(l);
                }
            }
        }
        // 除いたうち、最小値を出力
        sort(a_dash.begin(), a_dash.end());
        cout << a_dash.at(0) << endl;
    }  

    return 0;
}