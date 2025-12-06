#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int n, x, t;
	cin >> n >> x >> t;

	int minutes = 0;
	minutes = n / x * t;
	if(n % x != 0) minutes += t;

	// outputs
	cout << minutes << endl;

	return 0;
}