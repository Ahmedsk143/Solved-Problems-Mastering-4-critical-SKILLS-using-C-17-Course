#include <iostream>
using namespace std;

/*
 ● Input: Read integer T for a number of test cases.
 ● For each test case read integer N followed by reading N integers.
 ● Output: For each test case, print the minimum of the N integers.
 ● Input
 ○ 2 6 10 50 20 70 30 4 3 10 5 30
 ○ Notice here we have 2 test cases
 ■ 6 10 50 20 70 30 4 [6 numbers to read] ⇒ min is 4
 ■ 3 10 5 30
 ● Output
 ○ 4
 ○ 5
 */

int main() {
	int T, N, i = 1, min;
	cin >> T;
	while (i <= T) {
		cin >> N;
		int j = 1;
		int num;
		cin >> num;
		min = num;
		while (j < N) {
			cin >> num;
			if (num < min)
				min = num;
			j++;
		}
		cout << min << endl;
		i++;
	}
	return 0;
}
