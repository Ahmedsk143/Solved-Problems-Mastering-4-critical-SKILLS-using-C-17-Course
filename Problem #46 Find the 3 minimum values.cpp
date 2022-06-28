#include <iostream>
using namespace std;
/*
 Problem #1: Find the 3 minimum values
 ● Read integer N (>= 3), then read N integers. Find the 3 lowest numbers.
 ○ Don’t change the array content
 ○ Don’t iterate on the array more than once
 ● Input ⇒ Output
 ○ 5 4 1 3 10 8
 ⇒ 1 3 4

 ○ 3 7 9 -2
 ⇒ -2 7 9

○ 6 1 10 20 30 -1 -9
⇒ -9 -1 1
 */
int main() {
	int N;
	cin >> N;
	int arr[N];

	// arrange the first 3 number from lower to higher
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	int min1, min2, min3;
	if (arr[0] < arr[1]) {
		if (arr[0] < arr[2]) {
			min1 = arr[0];
			if (arr[1] < arr[2]) {
				min2 = arr[1];
				min3 = arr[2];
			} else {
				min2 = arr[2];
				min3 = arr[1];
			}
		} else {
			min1 = arr[2];
			min2 = arr[0];
			min3 = arr[1];

		}
	} else {
		if (arr[1] < arr[2]) {
			min1 = arr[1];
			if (arr[2] < arr[0]) {
				min2 = arr[2];
				min3 = arr[0];
			} else {
				min2 = arr[0];
				min3 = arr[2];
			}
		} else {
			min1 = arr[2];
			min2 = arr[1];
			min3 = arr[0];
		}

	}

	// compare the first lowest 3 to other numbers
	for (int i = 3; i < N; i++) {
		cin >> arr[i];
		if (arr[i] <= min1) {
			min3 = min2;
			min2 = min1;
			min1 = arr[i];
		} else {
			if (arr[i] <= min2) {
				min3 = min2;
				min2 = arr[i];
			} else {
				if (arr[i] < min3) {
					min3 = arr[i];
				}
			}
		}
	}
	cout << min1 << " " << min2 << " " << min3;

	return 0;
}
