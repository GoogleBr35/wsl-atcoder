#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int a, b, k;
	cin >> a >> b >> k;

	for(int i = a; i <= b; i++) {
		// outputs
		if(i - k < a || i + k > b)cout << i << endl;
	}

	return 0;
}