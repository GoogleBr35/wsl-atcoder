#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;

int main(void) {
    // inputs
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; ++i) {
        a.at(i).second = i;
        cin >> a.at(i).first;
    }
    for(int i = 0; i < q; ++i) {
        vector<int> a_ds(n, INF);
        // query_iのinput
        int k;
        cin >> k;
        queue<int> b;
        for(int j = 0; j < k; ++j) {
            int y;
            cin >> y;
            a_ds.at(y-1).first = INF;
        }
        
        // 除いたうち、最小値を出力
        sort(a.begin(), a.end());
        cout << a.at(0).first << endl;
    }  

    return 0;
}