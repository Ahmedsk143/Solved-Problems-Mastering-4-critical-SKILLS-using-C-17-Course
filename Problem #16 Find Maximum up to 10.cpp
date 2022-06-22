#include <iostream>
#include <math.h>
using namespace std;
/*
 Problem #2: Find Maximum up to 10
 ● Read an integer N (2 <= N <= 10)
 ● Then read N integers, find which of them has the biggest value and print it.
 ● Inputs
 ○ 5 1 3 2 4 2 ⇒ 4
 ■ 5 means read 5 integers
 ■ Then we read them [1 3 2 4 2]. Their maximum is 4
 ○ 10 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
 ■ Same as last homework. This time we are given first N (10)
 */
int main() {
	int x, n, max;
	cin >> x;
	cin >> n;
	max = n;
	cin >> n;
	if (n > max)
		max = n;
	if (x >= 3)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 4)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 5)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 6)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 7)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 8)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 9)
		cin >> n;
	if (n > max)
		max = n;
	if (x >= 10)
		cin >> n;
	if (n > max)
		max = n;

	cout << max;

	return 0;
}
