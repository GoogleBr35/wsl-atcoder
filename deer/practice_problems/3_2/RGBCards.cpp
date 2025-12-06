#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int r, g, b;
	cin >> r >> g >> b;

	bool isMultiple = false;
	if((g * 10 + b) % 4 == 0) isMultiple = true;

	// outputs
	if(isMultiple) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}