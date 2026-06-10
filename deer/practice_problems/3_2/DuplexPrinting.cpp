#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int n;
	cin >> n;

	// outputs
	if(n % 2 == 0) cout << n / 2 << endl;
	else cout << n / 2 + 1 << endl;

	return 0;
}