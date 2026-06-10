#include <bits/stdc++.h>
using namespace std;

string judge(string s) {
    if(s.size() == 5 || s.size() == 10) return "Yes";
    return "No";
}

int main(void) {
    // inputs
    string s;
    cin >> s;

    cout << judge(s) << endl;

    return 0;
}