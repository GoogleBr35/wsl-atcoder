#include <bits/stdc++.h>
using namespace std;

int main(void){
	// input
	int H, A;
	cin >> H >> A;
	
	// H / A
	int result = H / A;
	
	// output
	if(H % A == 0) {
		cout << result << endl;
	} else {
		cout << result + 1 << endl;
	}
	return 0;
}