#include <iostream>
using namespace std;

/*
 ● Read an integer N : print all numbers that satisfy the following property
 ○ Either number is divisible by 8
 ○ Or divisible by both 4 and 3
 ● Input: 100
 ● Output: 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96

 */

int main() {
	int num, i = 0;
	cin >> num;
	while (i < num) {
		if (i % 8 == 0 || (i % 4 == 0 && i % 3 == 0)) {
			cout << i << " ";
		}
		i++;
	}
	return 0;
}
