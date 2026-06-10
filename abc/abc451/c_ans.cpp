#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // inputs
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> que;    
    for(int i = 0; i < q; ++i) {
        int x, height;
        cin >> x;
        cin >> height;
        if(x == 1) {
            que.push(height);
        } else {
            while(!que.empty() && que.top() <= height) que.pop();
        }
        // outputs
        cout << que.size() << endl;
    }

    return 0;
}