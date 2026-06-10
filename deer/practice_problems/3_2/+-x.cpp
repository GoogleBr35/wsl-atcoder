#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int A, B;
	cin >> A >> B;

	// outputs
	cout << max(max(A+B, A-B), A*B) << endl;

	return 0;
}