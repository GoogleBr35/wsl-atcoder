#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int h, w;
	cin >> h >> w;

	int max = 0;
	if(h == 1 || w == 1) max = h * w;
	else max = ((h + 1) / 2) * ((w + 1) / 2);

	// outputs
	cout << max << endl;

	return 0;
}