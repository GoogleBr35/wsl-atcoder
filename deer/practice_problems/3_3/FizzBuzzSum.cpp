#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int n;
	cin >> n;

	int64_t total = 0;
	for(int i = 1; i <= n; i++) {
		bool isFizzBuzz = false; // Fizz, Buzz, FizzBuzz‚Ì‚Æ‚«true
		if(i % 3 == 0 || i % 5 == 0) isFizzBuzz = true;
		if(!isFizzBuzz) total += i;
	}

	// outputs
	cout << total << endl;

	return 0;
}