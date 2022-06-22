#include <iostream>
#include <math.h>
using namespace std;
/*
 Write a program that reads 2 numbers a, b and divides them (a/b), but prints
 only the fraction part
 Input: 201 25
 Output: 0.04
 Notice: 201 / 25 = 8.04
 We only want the fraction part: 0.04
 */
int main() {
	float n1, n2;
	cin >> n1 >> n2;
	cout << (n1 / n2) - (int) (n1 / n2);
	return 0;
}
