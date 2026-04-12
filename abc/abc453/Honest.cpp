#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using pint = pair<int, int>;
vector<vector<pint>> v;

bool hasProperTestimony(int truthBit, int i) {
    for(int j = 0; j < v[i].size(); ++j) {
        int personJ = v[i][j].first;
        int isHonesty = v[i][j].second;
        if(isHonesty != ((truthBit >> personJ) & 1)) {
            // i番目の人の、personJ に対する証言 isHonesty と 仮定 truthBit の真偽が等しくなければ間違い
            return false;
        } 
    }
    return true;
}

int main(void) {
    // inputs
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; ++i) {
        int a; cin >> a;
        v[i].resize(a);
        for(int j = 0; j < a; ++j) {
            cin >> v[i][j].first >> v[i][j].second;
            --v[i][j].first;
        }
    }

    // 全員が正直者という仮定から始める        
    int bit = (1 << n) - 1;
    int ans = 0;
    for(; bit > 0; --bit) {
        bool isAnswer = true;
        for(int i = 0; i < n; ++i) {
            if((bit >> i) & 1) {
                // 正直者についてのみ判定
                // i番目の人が正直者のとき、i番目の人の、j番目の人に対する証言が正解 (bit) と一致しているか判定
                if(!hasProperTestimony(bit, i)) {
                    isAnswer = false;
                    break;
                }
            }
        }
        if(isAnswer) ans = max(ans, __builtin_popcount(bit));
    }
    
    // outputs
    cout << ans << endl;
    return 0;
}