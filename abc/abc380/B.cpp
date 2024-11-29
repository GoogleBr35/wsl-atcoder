#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // 入力
    string S;

    cin >> S;

    // 数列を求める
    queue<int> A;
    int counter = 0;
    
    for(int i = 0; i < S.size(); i++) {
        if(S.at(i) == '-') {
            counter++;
        } else {
            A.push(counter);
            counter = 0;
        }
    }

    // 出力
    A.pop();
    while(A.size() > 1) {
        cout << A.front() << " ";
        A.pop();
    }
    cout << A.front() << endl;

    return 0;
}