#include <bits/stdc++.h>
using namespace std;

int main(void) {
    /*
    min(a, b)
    max(a, b)
    swap(a, b)
    ※引数は２つだよ
    sort(vec.begin(), vec.end()) -> 小さい順
    reverse(vec.begin(), vec.end())
    */
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c) - min(min(a, b), c) << endl;
}