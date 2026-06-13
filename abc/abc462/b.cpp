#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>());
    for(int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        for(int j = 0; j < k; ++j) {
            int presentForX;
            cin >> presentForX;
            --presentForX;
            ans[presentForX].push_back(i);
        }
    } 
    for(int i = 0; i < n; ++i) {
        cout << ans[i].size();
        if(ans[i].size() > 0) {
            for(int j = 0; j < ans[i].size(); ++j) {
                cout << ' ' << ans[i][j]+1;
            }
        }
        cout << endl;
    }
    return 0;
}