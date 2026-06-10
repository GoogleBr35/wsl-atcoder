#include <bits/stdc++.h>
using namespace std;

int fact(int a) { // a!の値を返す関数
	if(a != 1) return a * fact(a - 1);
	else return 1;
}

int main(void) {
	// inputs
	int p;
	cin >> p;

	int minCoins = 0;
	for(int i = 10; i > 0; i--) {
		if(p / fact(i) > 0){ // i!硬貨が使えるとき
			minCoins += p / fact(i); // i!硬貨を使えるだけ使う
			p -= fact(i) * (p / fact(i)); // 支払うべき金額を更新
		}
		if(p == 0) break; // 支払うべき金額に達したらループを抜ける
	}

	// outputs
	cout << minCoins << endl;

	return 0;
}