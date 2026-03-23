#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; ++i) {
        cin >> s.at(i);
    }

    for(int i = n - 2; i >= 0; --i) {
        for(int j = 0; j < 2*n - 1; ++j) {
            if(s.at(i).at(j) == '#') {
                if(s.at(i + 1).at(j - 1) == 'X' || s.at(i + 1).at(j) == 'X' || s.at(i + 1).at(j + 1) == 'X') {
                    s.at(i).at(j) = 'X';
                }
            }
        }
    }

    // outputs
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 2*n - 1; ++j) {
            cout << s.at(i).at(j);
        }
        cout << endl;
    }

    return 0;
}