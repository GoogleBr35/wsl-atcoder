#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int n;
    cin >> n;
    pair<int, string> highest, secondHighest;
    highest = secondHighest = {0, "default"};
    for(int i = 0; i < n; i++) {
        int value;
        string key;
        cin >> key >> value;
        // st[key] = value; // Si, T1の登録
        auto p = make_pair(value, key);
        if(highest < p) { // valueがhighestより高い
            // secondHighestをhighestに更新
            // secondHighest.first = highest.first;
            // secondHighest.second = highest.second;
            secondHighest = highest;
            // highestをkey, valueに更新
            // highest.first = key;
            // highest.second = value;
            highest = p;
        } else if(secondHighest < p) { // valueがsecondHighestより高く、highestより低い
            // highestはそのまま
            // secondHighestをkey, valueに更新
            // secondHighest.first = key;
            // secondHighest.second = value;
            secondHighest = p;
        }
    }

    // outputs
    cout << secondHighest.second << endl;

    return 0;
}