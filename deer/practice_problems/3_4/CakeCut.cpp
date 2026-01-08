#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<ll> a(n);
    ll all = 0;
    for(auto &x:a) {
        cin >> x;
        // 全体のサイズを求める
        all += x;
    }

    bool exist = false; // 判定用フラグ
    ll part; // 連続した部分のサイズを格納する変数
    int index; //
    // i = 0 ~ n-1 で全探索
    for(int i = 0; i < n; i++) {
        part = a[i];
        index = (i == n - 1) ? 0 : i + 1;
        while(part * 10 < all) {
            part += a[index];
            index = (index == n - 1) ? 0 : index + 1;
        }        
        if(part * 10 == all) { // 連続する部分和が全体の10分の1と等しい == 部分和の10倍が全体と等しい とき
            // flagを真にしてループを抜ける
            exist = true;
            break;
        }
    }

    // outputs
    string ans = exist ? "Yes" : "No";
    cout << ans << endl;
    
    return 0;
}