#include <bits/stdc++.h>
using namespace std;

bool left(vector<string> s, int i, int j) {
    if(s.at(i).at(j - 1) == '.')true;
    return false;
}

int main(void) {
    // inputs
    int height, width;
    cin >> height >> width;
    vector<string> s(height);
    for(int i = 0; i < height; ++i) cin >> s.at(i);

    int count = 0;
    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
            if(s.at(i).at(j) == '.') {
                s.at(i).at(j) = 'x';
                if(0 < i && 0 < j) {
                    if(s.at(i - 1).at(j) == '#' && s.at(i).at(j - 1) == '#' && i != height - 1 && j != width - 1) {
                        count += 1;
                    }
                }
            }  
        }
    }
    
    // outputs
    cout << count << endl;

    return 0;
}