#include <bits/stdc++.h>

using namespace std;

    // 処理に用いる文字列
    string x = "dream";
    string y = "dreamer";
    string z = "erase";
    string w = "eraser";

bool compare(string S, string pat, int i) {
    bool is_matched = true;
    // S.size() - i + 1から i 文字 (patの終りまで) 比較
    for(int j = S.size()-i+1; j < pat.size()-1; j++) {
        if(S.at(j) != pat.at(j)) {
            is_matched = false;
            break;
        }
    }
    return is_matched;
}

bool search(string S, string T) {
    // 判定用
    bool is_able = true;
    int i = 0;
    int j = 0;
    string pat;

    // 判定
    do {
        pat = T + x;
        if(compare(S, pat, x.size())) {
            T = pat;
        } else {
            pat = T + y;
            if(compare(S, pat, y.size())) {
                T = pat;
            } else {
                pat = T + z;
                if(compare(S, pat, z.size())) {
                    T = pat;
                } else {
                    pat = T + w;
                    if(compare(S, pat, w.size())) {
                        T = pat;
                    } else {
                        is_able = false;
                        break;
                    }
                }
            }
        }
    } while(T.size() < S.size());
    if(T.size() != S.size()) is_able = false;

    return is_able;
}

int main(void) {
    string S;
    string T;
    
    // input
    cin >> S;

    // output
    if(search(S, T)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}