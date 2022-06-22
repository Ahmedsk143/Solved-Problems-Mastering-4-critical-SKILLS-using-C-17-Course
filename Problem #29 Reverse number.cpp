#include <iostream>
using namespace std;

/*
 Problem #2: Reverse number
 ● Read an integer N, then find its reverse integer R
 ○ Print R R*3
 ● input ⇒ Output
 ○ 123 ⇒ 321 963
 */

int main() {
	long N, R = 0;
	cin >> N;
	while (N) {
		int lastN = N % 10; //get last digit to reverse it
		R = R * 10 + lastN; // that's how to add digits to old digits
		N /= 10; //remove last digit
	}
	cout << R << " " << R * 3 << "\n";

	return 0;
}
