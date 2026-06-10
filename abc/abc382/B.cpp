#include <bits/stdc++.h>
using namespace std;

int main()
{
    // in: '@', null: '.'
    int N, D;
    cin >> N >> D;
    string S;
    cin >> S;

    // loop through each day
    for(int i = 0; i < D; i++) {
        // loop through each position in the string, from the end to the start
        for(int j = 0; j < N; j++) {
            // if the current position is '@', turn it into '.'
            if(S[N - 1 - j] == '@') {
                S[N - 1 - j] = '.';
                break;
            }
        }
    }

    cout << S << endl;
    return 0;
}