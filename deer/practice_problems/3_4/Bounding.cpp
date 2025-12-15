#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n, x;
    cin >> n >> x;
    int count = 1; // 1回必ずD1 = 0で跳ねる
    int distance = 0;
    for(int i = 0; i < n; i++) {
        int l;
        cin >> l;
        distance += l;
        if(distance <= x) count++;
    }
    // outputs
    cout << count << endl;
    return 0;
}