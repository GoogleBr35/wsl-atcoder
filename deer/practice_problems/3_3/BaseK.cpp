#include <bits/stdc++.h>
using namespace std;

int powN(int n, int k) {
	int powN = 1;
	for(int i = 0; i < k; i++) powN *= n;
	return powN;
}

long long toBaseTen(int n, int k) {
	long long nBaseTen = 0;

	int i = 0;
	while(n >= 1) {
		nBaseTen += powN(k, i) * (n % 10); // Å¬ˆÊ‚Ì’l‚ğ10i–@‚É‚·‚é
		n /= 10; // 1Œ…íœ
		i++;
	}

	return nBaseTen;
}

int main(void) {
	// inputs
	
	int k;
	long long a, b;
	cin >> k >> a >> b;

	int a_baseTen = toBaseTen(a, k);
	int b_baseTen = toBaseTen(b, k);

	// outputs
	cout << a_baseTen * b_baseTen << endl;

	return 0;
}