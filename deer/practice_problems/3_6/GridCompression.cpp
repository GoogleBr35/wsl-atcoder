#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int height, width;
    cin >> height >> width;
    string whiteRow = "";
    for(int i = 0; i < width; ++i) {
        whiteRow.push_back('.');
    }
    vector<string> a(height), b(1);
    b.at(0) = whiteRow;
    for(int i = 0; i < height; ++i) {
        cin >> a.at(i);
        // 行圧縮
        if(a.at(i) != whiteRow) b.push_back(a.at(i)); 
    }

    // 列圧縮
    for(int i = 0; i < width; ++i) {
        if(b.at(1).at(i) == '.') {
            int count = 1;
            for(int j = 2; j < b.size(); ++j) {
                if(b.at(j).at(i) == '.') ++count;
            }
            b.at(0).at(i) = count + '0';
        }
    }

    // outputs
    for(int i = 1; i < b.size(); ++i) {
        for(int j = 0; j < width; ++j) {
            if(b.at(0).at(j) != (char)(b.size() - 1 + '0')) cout << b.at(i).at(j);
        }
        cout << endl;
    }

    return 0;
}