#include <bits/stdc++.h>
using namespace std;

bool isPN(int n) {
	int a, b, c, d, e;
	e = n % 10; n /= 10; // nの一の位
	d = n % 10; n /= 10; // nの十の位
	c = n % 10; n /= 10; // nの百の位
	b = n % 10; n /= 10; // nの千の位
	a = n % 10;          // nの万の位

	if(a == e && b == d) { // 回文数となるとき
		return true;
	}
	return false;
}

int main(void) {
	// inputs
	int a, b;
	cin >> a >> b;

	int count = 0;
	for(int i = a; i <= b; i++) {
		if(isPN(i)) count++;
	}

	// outputs
	cout << count << endl;

	return 0;
}