#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int A, B;
	cin >> A >> B;

	// outputs
	if(A >= 13) cout << B << endl;
	else if(A >= 6) cout << B / 2 << endl;
	else cout << 0 << endl;

	return 0;
}