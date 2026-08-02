#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int count = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'x') {
            if((i-1 == -1 || s[i-1] == 'x') && (i+1 == s.size() || s[i+1] == 'x')) {
                count++;
            }
        }
         
    }
    cout << count << endl;
    return 0;
}