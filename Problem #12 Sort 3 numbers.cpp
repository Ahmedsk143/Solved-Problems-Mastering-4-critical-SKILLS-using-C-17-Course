#include <iostream>
#include <math.h>
using namespace std;
/*
 Problem #2: Sort 3 numbers
 ● Given 3 integers, sort (order) them in ascending order and print them .
 ● Inputs ⇒ outputs
 ○ 1 2 3 ⇒ 1 2 3
 ○ 1 3 2 ⇒ 1 2 3
 ○ 2 1 3 ⇒ 1 2 3
 ○ 2 3 1 ⇒ 1 2 3
 ○ 3 1 2 ⇒ 1 2 3
 ○ 3 2 1 ⇒ 1 2 3
 ● Do you notice there are only 6 ways to permutate 3 numbers!
 */
int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 <= n2 && n1 <= n3) {
		if (n2 < n3) {
			cout << n1 << " " << n2 << " " << n3;
		} else
			cout << n1 << " " << n3 << " " << n2;
	} else if (n2 <= n1 && n2 <= n3) {
		if (n1 < n3) {
			cout << n2 << " " << n1 << " " << n3;
		} else
			cout << n2 << " " << n3 << " " << n1;
	} else if (n3 <= n1 && n3 <= n2) {
		if (n1 < n2) {
			cout << n3 << " " << n1 << " " << n2;
		} else
			cout << n3 << " " << n2 << " " << n1;
	}
	return 0;
}
