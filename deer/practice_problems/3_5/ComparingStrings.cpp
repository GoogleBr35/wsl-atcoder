#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int a, b;
    cin >> a;
    cin >> b;

    string ans;
    if(a < b) {
        // aをb回
        for(int i = 0; i < b; i++) cout << a;
    } else {
        // bをa回
        for(int i = 0; i < a; i++) cout << b;
    }
    cout << endl;

    return 0;
}