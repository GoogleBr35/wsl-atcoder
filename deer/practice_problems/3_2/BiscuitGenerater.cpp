#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int a, b, t;
	cin >> a >> b >> t;

	int freq = t / a;
	int biscuits = freq * b;

	// outputs
	cout << biscuits << endl;

	return 0;
}