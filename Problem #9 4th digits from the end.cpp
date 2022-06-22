#include <iostream>
#include <math.h>
using namespace std;
/*
 Write a program that reads an integer and print the 4th from the right side. If
 no such digit, print 0
 ● Inputs => outputs
 ○ 15 => 0
 ○ 125 => 0
 ○ 1000 => 1
 ○ 5001 => 5
 ○ 1234 => 1
 ○ 654321 => 4
 ○ 99999 => 9
 */
int main() {
	long long num;
	cin >> num;
	//%10000 gets last 4 digits
	// /1000 removes last 3 digits
	if (num < 1000)
		cout << 0;
	else
		cout << (num %10000) /1000;
	return 0;
}
