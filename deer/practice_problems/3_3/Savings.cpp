#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int n;
	cin >> n;
	
	int day;
	int sum = 0;
	for(day = 1; sum < n; day++) {
		sum += day;
	}

	// outputs
	cout << day - 1 << endl;

	return 0;
}