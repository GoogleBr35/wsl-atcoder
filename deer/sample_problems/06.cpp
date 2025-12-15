#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // inputs
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    // 全て偶数なら2で割り、カウントアップする
    int count = 0;
    bool isOdd = false;
    while (!isOdd) {
        for (int j = 0; j < n; j++) {
            if (a.at(j) % 2 == 1) {
                isOdd = true;
                break;
            }
            a.at(j) /= 2; // 偶数なら割ったものを再代入
        }
        if(isOdd) break; // 奇数なら終了
        count++;
    }

    // outputs
    cout << count << endl;

    return 0;
}