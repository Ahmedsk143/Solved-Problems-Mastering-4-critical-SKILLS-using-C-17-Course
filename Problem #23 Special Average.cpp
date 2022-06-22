#include <iostream>
using namespace std;

/*
 ● Read integer N, followed by reading N numbers. Print 2 values
 ○ The average of the numbers in odd positions (1st, 3rd, 5th, …)
 ○ The average of the numbers in even positions (2nd, 4th, 6th, …)
 ● Input
 ○ 6 10 100 20 200 30 600
 ● Output
 ○ 20 300
 ● Explantation
 ○ (10+20+30)/3 = 20
 ○ (100+200+600)/3 = 300

 */

int main() {
	int X, num, i = 1, oddSum = 0, oddCnt = 0, evenSum = 0, evenCnt = 0;
	cin >> X;
	while (i <= X) {
		cin >> num;
		if (i % 2 == 0) {
			evenSum += num;
			evenCnt++;
		} else {
			oddSum += num;
			oddCnt++;
		}
		i++;
	}
	cout << oddSum / oddCnt << " " << evenSum / evenCnt;

	return 0;
}
