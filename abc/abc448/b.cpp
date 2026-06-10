#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;
    vector<int> c(m); // 各コショウの残量
    for(auto& x:c) cin >> x;
    vector<pair<int, int>> p(n); // i番目の料理に使える、(コショウの種類 a , 量の上限 b)
    for(int i = 0; i < n; ++i) {
        cin >> p.at(i).first; 
        cin >> p.at(i).second;
    }

    int ans = 0;
    for(int j = 0; j < m; ++j) {
        // j種類目のコショウについて
        for(int i = 0; i < n; ++i) {
            // A_i == j なら残数のうち最大限使う
            if(p.at(i).first == j+1) {
                int diff = (c.at(j) < p.at(i).second)? c.at(j) : p.at(i).second;
                ans += diff; c.at(j) -= diff;
                if(c.at(j) == 0) break;
            }
        }
    }

    // outputs
    cout << ans << endl;
    
    return 0;
}