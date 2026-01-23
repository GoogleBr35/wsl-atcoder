#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    string odd, even;
    cin >> odd;
    cin >> even;

    string ans = "";
    for(int i = 0; i < odd.size(); i++) {
        cout << odd[i]; 
        if(i < even.size()) cout << even[i];
    }

    return 0;
}