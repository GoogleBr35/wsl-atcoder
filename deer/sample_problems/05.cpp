#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int n, a, b;
	cin >> n >> a >> b;

	int sumOfDigit = 0;
	int total = 0;

	for(int i = 1; i <= n; i++) { // 1ˆÈãnˆÈ‰º‚Ì®”‚Ì‚¤‚¿
		// ŠeŒ…‚Ì˜a‚ÌŒvŽZ
		sumOfDigit = i / 10000 + (i % 10000) / 1000 + (i % 1000) / 100 + (i % 100) / 10 + (i % 10);

		if(sumOfDigit >= a && sumOfDigit <= b) { // ŠeŒ…‚Ì˜a‚ªaˆÈãbˆÈ‰º‚È‚ç
			total += i; // ‘˜a‚É‰Á‚¦‚é
		}
	}

	// outuputs
	cout << total << endl;

	return 0;
}