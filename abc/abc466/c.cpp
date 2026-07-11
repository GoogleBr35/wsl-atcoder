#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n;
    cin >> n;
    bool inChat = true;
    bool isChecking = false;
    string reply;
    ll ans = 0;
    ll start = 1;
    ll end = 2;
    while(inChat) {
        // output (qestion)
        cout << "? " << start << " " << end << endl;
        // input
        cin >> reply;
        if(isChecking) {
            if(reply == "Yes") {    
                ++ans;
            }
            ++start;
            if(start == end) {
                isChecking = false;
                ++end;
            }
        } else {
            if(reply == "Yes") {
                ++end;
                ++ans;
            } else {
                ++start;
                isChecking = true; 
            }
        }
        if(start >= n) inChat = false;
    }
    cout << "! " << ans << endl; 
    return 0;
}