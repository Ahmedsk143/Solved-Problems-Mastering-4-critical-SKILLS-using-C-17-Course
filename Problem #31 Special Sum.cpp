#include <iostream>
using namespace std;

/*
 ● Read integer T for number of test cases.
 ● For each test case read integer N. Then read N integers a, b, c
 ● Output: Compute the sum of the following expression:
 ○ a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
 ■ That is the k-th number is repeated k times
 ● Input:
 2
 3 5 7 2
 4 1 2 3 4
 ● Output
 ○ 62 [as (5 + 7*7 + 2*2*2) = 62]
 ○ 288 [as (1+2*2+3*3*3+4*4*4*4) = 288]
 */

int main() {
	int T;
	cin >> T;
	while (T) {
		int i = 1, N, sum = 0;
		cin >> N;
		while (i <= N) {
			int num = 0, j = i, mult = 1;
			cin >> num;
			while (j) {
				mult *= num;
				j--;
			}
			sum += mult;
			i++;
		}
		cout << sum << "\n";
		T--;
	}

	return 0;
}
