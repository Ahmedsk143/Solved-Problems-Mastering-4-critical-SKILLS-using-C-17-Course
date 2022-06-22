#include <iostream>
#include <math.h>
using namespace std;
/*

 We know N % M computes the remainder of division
 Write a program that reads 2 positive integers and print such reminder without
 using the modulus operator %
 Input: 27 12
 Output: 3
 Remember in math: 27 % 12 = 3
 */
int main() {
	float N, M, fraction;
	cin >> N >> M;
	fraction = (N / M) - (int) (N / M);
	cout << fraction * M;

	return 0;
}
