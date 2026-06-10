#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int64_t n;
	int k;
	cin >> n >> k;

	string nAsStr;
	for(int i = 0; i < k; i++) {
		if(n % 200 == 0) {// ®”N‚ª200‚Ì”{”‚Å‚ ‚ê‚ÎA
			n /= 200; //N‚ð200‚ÅŠ„‚é
		} else { // ‚»‚¤‚Å‚È‚¯‚ê‚Î
			// N‚ÌŒã‚ë‚É•¶Žš—ñ‚Æ‚µ‚Ä200‚ð•t‚¯‰Á‚¦‚½®”‚É’u‚«Š·‚¦‚é
			nAsStr = to_string(n);
			nAsStr += "200";
			n = stoll(nAsStr);
		}
	}

	// outputs
	cout << n << endl;

	return 0;
}