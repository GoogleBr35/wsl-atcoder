#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    int a, b, c;
    cin >> N;
    a = N / 100;
    b = (N - a * 100) / 10;
    c = N - a * 100 - b * 10;
    cout << b << c << a << " " << c << a << b << endl;

    return 0;
}