#include <bits/stdc++.h>
#define rep(i, N) for(int i = 0; i < N; i++)

using namespace std;

int main(void) {
    // input
    int N, Y;
    cin >> N >> Y;

    // judge
    // c.at(0) * 10000 + c.at(1) * 5000 + c.at(2) * 1000 == Y
    vector<int> c(3, -1);
    bool is_found = false;
    rep(i, N + 1) { // 10000
        rep(j, N + 1) { // 5000
            rep(k, N + 1) { // 1000
                if(i * 10000 + j * 5000 + k * 1000 == Y && i + j + k == N) {
                    c.at(0) = i; c.at(1) = j; c.at(2) = k;
                    is_found = true;
                    break;
                }
            }
            if(is_found) break;
        }
        if(is_found) break;
    }

    // output
    cout << c.at(0) << " " << c.at(1) << " " << c.at(2) << endl;
    return 0;
}