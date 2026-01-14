#include <bits/stdc++.h>
using namespace std;

bool judge(string s) {
    string hello = "Hello,World!";
    if(s.size() != hello.size()) return false;
    for(int i = 0; i < hello.size(); i++) {
        if(s[i] != hello[i]) return false;
    }
    return true;
}

int main(void) {
    // inputs
    string s;
    cin >> s;
    
    // outputs
    string ans = judge(s) ? "AC" : "WA";
    cout << ans << endl;
    return 0;
}