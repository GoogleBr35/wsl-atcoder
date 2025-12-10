#include <bits/stdc++.h>
using namespace std;

int breakNum(int a) {
	int counter = 0;
	while(a % 2 == 0) { // aが2で割り切れる間
		a /= 2; // aを2で割る
		counter++; // カウントアップ
	}
	return counter;
}

int main(void) {
	// inputs
	int n;
	cin >> n;

	int maxBroken = 0; // 暫定の2で割れる回数の最大値
	int ans = 1; // maxBrokenとなる数
	for(int i = 1; i <= n; i++) {
		int timesBroken = breakNum(i); // 2で割れる回数を求める
		if(maxBroken < timesBroken) { // iの2で割れる回数が最大値より大きければ
			maxBroken = timesBroken; // 最大値を更新
			ans = i; // maxBrokenとなる数を更新
		}
	}

	// outputs
	cout << ans << endl;

	return 0;
}