#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int x, a, b;
	cin >> x >> a >> b;

	int cake = x - a;
	int restMoney = cake % b;

	// outputs
	cout << restMoney << endl;

	return 0;
}