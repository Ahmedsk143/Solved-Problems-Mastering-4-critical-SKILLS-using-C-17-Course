#include <iostream>
#include <math.h>
using namespace std;
/*

 Write a code to swap 3 numbers
 Let say we have numbers a = 115, b = 20, c = 301
 We wanna their final values to be: a = 20, b = 301, c = 115
 Challenge: Do it in 4 lines

input:1 2 3
output: 2 3 1

input: 20 30 50
output: 30 50 20

 */
int main() {
	int num1, num2, num3, temp;
	cin >> num1 >> num2 >> num3;
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;
	cout << num1 << " " << num2 << " " << num3;

	return 0;
}
