#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//ll powK(int k, int i) { // 8の塁上を返す関数
//	ll ans = 1;
//	while(i > 0) {
//		ans *= k;
//		i--;
//	}
//	return ans;
//}

ll toBaseTen(ll n) { // 8進数を10進数に変換する関数
	ll ans = 0;
	ll base = 1;
	while(n > 0) {
		ans += (n % 10) * base;
		n /= 10;
		base *= 8;
	}
	return ans;
}

ll toBaseNineAndReplace(ll n) { // 10進数を9進数に変換し、'8'を'5'に置き換える関数
	if(n == 0) return 0;

	stack<int> nBaseNine;
	while(n >= 1) {
		int digit = n % 9;
		if(digit == 8) digit = 5; // '8'を'5'に置き換え
		nBaseNine.push(digit);
		n /= 9;
	}
	// stack<ll> -> ll変換
	ll ans = 0;
	while(!nBaseNine.empty()) {
		ans = ans * 10 + nBaseNine.top();
		nBaseNine.pop();
	}
	return ans;
}

int main(void) {
	// inputs
	ll n;
	int k;
	cin >> n >> k;

	for(int i = 0; i < k; i++) {
		n = toBaseTen(n); // n(Base 8) -> n(Base 10)
		n = toBaseNineAndReplace(n); // n(Base 10) -> n(Base 9) ('8' -> '5')
	}

	// outputs
	cout << n << endl;

	return 0;
}