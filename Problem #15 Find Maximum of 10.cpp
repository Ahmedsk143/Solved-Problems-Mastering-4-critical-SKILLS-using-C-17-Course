#include <iostream>
#include <math.h>
using namespace std;
/*
 Problem #1: Find Maximum of 10
 ● Read 10 integers, find which of them has the biggest value and print it.
 ● Inputs
 ○ 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
 ● Restriction: In your whole code there should be 2 integer variables defined
 ONLY
 ○ If it is hard constraint; code it in whatever way
 */
int main() {
	int n, max;
	cin >> n;
	max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;
	cin >> n;
	if (n > max)
		max = n;

	cout<< max;

	return 0;
}
