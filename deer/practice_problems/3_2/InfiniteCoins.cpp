#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int N, A;
	cin >> N >> A;

	bool canPay = true;
	if(N % 500 > A) canPay = false;

	// outputs
	if(canPay) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}