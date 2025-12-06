#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	bool win = true;
	while(a > 0 && c > 0) {
		// ‚‹´UŒ‚
		c -= b;
		if(c <= 0) break;
		// Â–ØUŒ‚
		a -= d;
	}
	if(a <= 0) win = false;
	
	// outputs
	if(win) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}