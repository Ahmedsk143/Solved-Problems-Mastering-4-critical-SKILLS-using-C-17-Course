#include <iostream>
#include <math.h>
using namespace std;
/*
 Given 3 integers, you have to find the biggest one of them which is < 100.
 ○ Print -1 if no such number
 ● Inputs
 ○ 22 90 115 ⇒ 90
 ■ Here [20 90] are only < 100. Maximum (20, 90) = 90
 ○ 200 300 400 ⇒ -1
 ■ All of them are > 100, so no answer
 ○ 50 100 150 ⇒ 50
 ■ Only 50 is < 100.
 ○ 10 30 20 ⇒ 30
 ■ The 3 numbers < 100, so their max is 30
 */
int main() {
	int n1, n2, n3, max =-1;
	cin >> n1 >> n2 >> n3;
	if (n1 < 100)
		max = n1;
	if (n2 < 100)
		max = n2;
	if (n3 < 100)
		max = n3;

	if (n1 < 100 && n1 > max) {
		max = n1;
	}
	if (n2 < 100 && n2 > max) {
		max = n2;
	}
	if (n3 < 100 && n3 > max) {
		max = n3;
	}
	cout << max;

	return 0;
}
