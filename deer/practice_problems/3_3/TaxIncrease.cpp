#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// inputs
	int a, b;
	cin >> a >> b;

	int ans = - 1;
	// x / 10 == B (¬”“_ˆÈ‰ºØ‚èÌ‚Ä) ‚Æ‚È‚éx
	// ‚Í 10*B, 10*B+1, ... , 10*B+10 ‚Ì10’Ê‚è‚Ì‚İ
	for(int i = b * 10; i < b * 10 + 10; i++) { // 10*B, 10*B+1, ... , 10*B+10 ‚Ì‚¤‚¿
		if(i * 8 / 100 == a) { // ‚à‚µÁ”ïÅ—¦‚ª8%‚Ì‚Æ‚«A‰~‚È‚ç
			ans = i;
			break;
		}
	}

	// outputs
	cout << ans << endl;

	return 0;
}