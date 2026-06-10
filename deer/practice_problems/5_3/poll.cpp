#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    // inputs
    int n;
    cin >> n;
    map<string, int> s;
    for(int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        ++s[x];
    }

    // 登場回数で昇順ソート
    vector<pair<int, string>> v;
    for(auto p:s) {
        v.push_back(make_pair(p.second, p.first));
    }
    sort(v.begin(), v.end());

    // 
    int maxCount = v.back().first;
    vector<string> ans;
    while(!v.empty() && v.back().first == maxCount) {
        ans.push_back(v.back().second);
        v.pop_back();
    }
    sort(ans.begin(), ans.end());

    // outputs
    for(auto x:ans) cout << x << endl;
    return 0;
}