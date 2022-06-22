#include <iostream>
using namespace std;

/*
 ● Input: Read an integer N followed by a single character
 ● Output: Print the character N times as below
 ● Input ⇒ Output
 ○ 5 Y ⇒ YYYYY
 ○ 3 # ⇒ ###
 */

int main() {
	int X;
	char C;
	cin >> X >> C;
	while (X > 0) {
		cout << C;
		X--;
	}

	return 0;
}
