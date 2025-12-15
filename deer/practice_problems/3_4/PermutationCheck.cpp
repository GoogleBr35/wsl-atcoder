#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x:a) cin >> x;

    // n == 1のとき、a = (1)でなければいけない
    if(n == 1) {
        if(a.at(0) == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }

    bool canGet = true;
    sort(a.begin(), a.end()); // aを小さい順にソート
    for(int i = 0; i < n - 1; i++) {
        if(a.at(i + 1) - a.at(i) != 1) { // ソートされた a[i], a[i+1] が連続した整数でなければ
            // (1, 2, ... , N)を並び替えても得られない
            canGet = false;
            break;
        }
    }

    // outputs
    if(canGet) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}