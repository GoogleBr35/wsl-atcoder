#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // intputs
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a) cin >> x;

    sort(a.begin(), a.end(), greater());
    int scoreDiff = 0;
    for(int i = 0; i < a.size(); i++) {
        if(i % 2 == 0) scoreDiff += a.at(i);
        else scoreDiff -= a.at(i);
    }

    // outputs
    cout << scoreDiff << endl;

    return 0;
}