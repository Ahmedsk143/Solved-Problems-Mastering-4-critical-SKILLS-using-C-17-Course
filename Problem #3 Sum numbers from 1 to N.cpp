#include <iostream>
#include <math.h>
using namespace std;
/*

 Write a program that reads integer N and Print the sum from 1 to N
 E.g. If input N = 5, then Output is: 15
 Why? As 1+2+3+4+5 = 15
 Below table of more values
 3 ⇒ 6 (1+2+3)
 4 ⇒ 10 (1+2+3+4)
 5 ⇒ 15 (1+2+3+4+5)
 You need to find a simple 1 line formula to solve the problem :)
 Hint: Let N = 8. Write numbers from 1 to 8
 What is the sum of 1st and 8th number? sum of 2nd and 7th? And so on
 Your formula should be good for even and odd N. Be careful programmer!
 What is the maximum N after it overflow occurs? Recall int max is 2147483647
 */
int main() {
	int N;
	cin >> N;
	cout << (N + 1) * N / 2;
	return 0;
}
