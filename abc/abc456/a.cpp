#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string judge(int x) {
    if(3 <= x && x <= 18) return "Yes";
    return "No";
}

int main(void) {
    int x;
    cin >> x;
    cout << judge(x) << endl;
    return 0;
}