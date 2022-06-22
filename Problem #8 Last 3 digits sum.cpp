#include <iostream>
#include <math.h>
using namespace std;
/*
 Write a program that reads an integer and prints the sum of its last 3 digits.
 ● Inputs ⇒ Outputs examples
 ○ 15 ⇒ 6
 ○ 125 ⇒ 8
 ○ 1000 ⇒ 0
 ○ 1001 ⇒ 1
 ○ 1234 ⇒ 9
 ○ 99999 ⇒ 27
 */
int main() {
	long num;
	cin >> num;
	//%10 gets last number and /10 removes last number
	//%100 gets last 2 mumber and /100 removes last 2 numbers

	cout << (num % 10) + ((num % 100) / 10) + ((num % 1000) / 100);
	return 0;
}
