#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int k, a, b;
	cin >> k >> a >> b;

	bool achieved = false;
	for(int i = a; i <= b; i++) {
		if(i % k == 0) { // a <= i <= b ‚ªk‚Ì”{”‚È‚ç
			achieved = true;
			break; // ƒ‹[ƒv‚ð”²‚¯‚é
		}
	}

	// outputs
	if(achieved) cout << "OK" << endl;
	else cout << "NG" << endl;

	return 0;
}