#include <bits/stdc++.h>
using namespace std;

int main(void) {
    /*
    Alice, Bob, Alice, ...
    N枚
    a1, a2, ... , an
    */
    // input
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a.at(i);

    // sort
    sort(a.begin(), a.end(), greater<int>());

    // 格納
    int Alice = 0;
    int Bob = 0;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) Alice += a.at(i);
        else Bob += a.at(i);
    }

    // output
    cout << Alice - Bob << endl;

    return 0;
}