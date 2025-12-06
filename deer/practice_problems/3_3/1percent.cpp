#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int64_t x;
	cin >> x;

	int year = 0; // ‰½”N–Ú‚©
	int64_t savings = 100; // —a‹àŠz
	while(savings < x) {
		year += 1;
		savings += savings / 100; // 1%‚Ì—˜Žq‚ð—a‹àŠz‚É‰ÁŽZ
	}

	// outputs
	cout << year << endl;

	return 0;
}