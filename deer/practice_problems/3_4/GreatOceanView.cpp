#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    cin >> n;
    vector<int> h(n);
    int count = 0;
    int maxHeight = 0;
    for(int& x : h) {
        cin >> x;
        if(x >= maxHeight) {
            maxHeight = x;
            count++;
        }
    }

    // outputs
    cout << count << endl;

    return 0;
}