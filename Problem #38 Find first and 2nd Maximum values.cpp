#include <iostream>
using namespace std;

/*
 ● Read an Integer N ( < 200), then read N (distinct) integers. Find the maximum
 and 2nd maximum values
 ● Input: 5 10 20 3 30 7 ⇒ Output 30 20
 ○ 30 is the maximum in the array
 ○ If we removed it, the next maximum is 20
 ● Stop the video and code it

 */

int main() {
	int N, max, maxSec;
	cin >> N;
	int arr[N];
	cin >> arr[0];
	cin >> arr[1];
	if (arr[0] > arr[1]) {
		max = 0;
		maxSec = 1;
	} else {
		max = 1;
		maxSec = 0;
	}
	for (int i = 2; i < N; i++) {
		cin >> arr[i];

		if (arr[i] > arr[maxSec] && arr[max] > arr[maxSec]) {
			maxSec = i;

		}
		if (arr[i] > arr[max]) {
			maxSec = max;
			max = i;
		}
	}
	cout << arr[max] << " " << arr[maxSec];
	return 0;
}
