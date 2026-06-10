#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    vector<int> p(26);
    for(auto &x:p) cin >> x;

    // outputs
    for(int i = 0; i < p.size(); i++) {
        char c = p[i] - 1 + 'a';
        cout << c;
    }
    cout << endl;
    
    return 0;
}