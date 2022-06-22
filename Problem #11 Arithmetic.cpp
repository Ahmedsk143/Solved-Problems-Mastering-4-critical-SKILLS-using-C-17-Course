#include <iostream>
#include <math.h>
using namespace std;
/*
 Read 2 integers A, B and print based on following cases:
 ○ if both are odd print their product A*B
 ○ if both are even print their division A/B (assume B != 0)
 ○ if the first is odd and the second is even then find their sum A+B
 ○ if the first is even and the second is odd then find their subtraction A-B
 ● Inputs ⇒ outputs
 ○ 5 7 => 35
 ○ 12 2 => 6
 ○ 5 6 => 11
 ○ 12 3 => 9
 */
int main() {
	int A, B;
	cin >> A >> B;
	if (A % 2 == 0) {
		if (B % 2 == 0) {
			cout << A / B;
		} else {
			cout << A - B;
		}
	} else {
		if (B % 2 == 0) {
			cout << A + B;
		} else {
			cout << A * B;
		}
	}
	return 0;
}
