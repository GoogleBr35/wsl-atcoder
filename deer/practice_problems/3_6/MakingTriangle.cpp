#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<int> length(n);
    for(auto& l:length) cin >> l;

    // lengthを降順でソート
    sort(length.begin(), length.end(), greater());
    int count = 0;
    for(int i = 0; i < n - 2; ++i) {
        for(int j = i + 1; j < n - 1; ++j) {
            for(int k = j + 1; k < n; ++k) {
                // 同じ長さの場合は除外
                if(length.at(i) != length.at(j) && length.at(i) != length.at(k) && length.at(j) != length.at(k)) {
                    // Li > Lj + Lk
                    if(length.at(i) < length.at(j) + length.at(k)) ++count;
                }
            }
        }
    }

    // outputs
    cout << count << endl;
    return 0;
}