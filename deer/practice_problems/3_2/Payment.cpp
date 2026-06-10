#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int n;
	cin >> n;

	// outputs
	if(n % 1000 == 0) cout << 0 << endl;
	else cout << 1000 - n % 1000 << endl;

	return 0;
}