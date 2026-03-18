#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int height, width;
    cin >> height >> width;
    vector<string> row(height);
    for(int i = 0; i < height; ++i) {
        cin >> row.at(i);
    }

    // outputs
    for(int i = 0; i < height; ++i) {
        cout << row.at(i) << endl;
        cout << row.at(i) << endl;
    }

    return 0;
}