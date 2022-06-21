#include <iostream>
#include <math.h>
using namespace std;
/*
 *Write a program that reads 2 variables num1 and num2
 E.g. say we read num1 = 7 and num2 = 231
 Target: we want swap the values of Num1 and Num2?
 Swap means exchange
 So Num1 takes value 231 and Num2 takes value 7
 * */
int main() {
	int num1, num2, temp;
	cin >> num1 >> num2;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2;

	return 0;
}
