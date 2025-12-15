#include <bits/stdc++.h>
using namespace std;

int howManyTimes(int n) {
    int count = 0;
    while(true) {
        if(n % 2 == 1) break;
        n /= 2;
        count++;
    }
    return count;
}

constexpr int INF = 1 << 30; // 定数として十分大きい最小値を用意

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x;

    int result = INF;
    for(auto y : a) {
        int times = howManyTimes(y); // a[k]が何回2で割れるかカウント
        result = min(result, times); // 最小値を更新
    }    

    // outputs
    cout << result << endl;
    return 0;
}