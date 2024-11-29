#include <bits/stdc++.h>
using namespace std;

vector<int> A(210, 0);

int main(void) {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A.at(i);

    int count = 0;
    bool exist_odd = false;
    while(true) {
        for(int j = 0; j < N; j++) {
            if(A.at(j) % 2) exist_odd = true;
            else A.at(j) /= 2;
        }
        if(exist_odd) break;
        else ++count;
    }

    cout << count << endl;
    return 0;
}