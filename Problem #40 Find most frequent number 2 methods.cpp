#include <iostream>
using namespace std;

/*
 Practice:
 ● Read an Integer N, then read N <= 200 integers. Find the value that repeated
 the most number of times.
 ○ Each integer is 0 <= integer <= 150
 ● Example for array: 1 2 1 3 1 5 5
 ○ 1 repeated 3 times: the largest
 ○ 2 repeated 1 time
 ○ 5 repeated 2 times
 input: 8 1 1 1 1 2 2 3 3
 output: 1 4
 */

int main() {
	int N;
	cin >> N;
	int arr[N], countArr[N] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		countArr[arr[i]] += 1;
	}

//	 using 2 loops
	int maxRepeated = -1, maxValue = -1;
	for (int i = 0; i < N; i++) {
		int repeated = 0;
		for (int k = 0; k < N; k++) {
			if (arr[i] == arr[k]) {
				repeated++;
			}
		}
		if (repeated > maxRepeated) {
			maxRepeated = repeated;
			maxValue = arr[i];
		}
	}
	cout << maxValue << " " << maxRepeated;

// better way
// using an array to track the count of each element
// index represent the number and arr[index] represent frequency
// find the max index in this array
// this is the index of the max value

//print count array
	for (int i = 0; i < N; i++) {
		cout << endl << "Value: " << i << " is repeated  " << countArr[i]
				<< " times";
	}
	int max = 0;
	for (int i = 1; i < N; i++) {
		if (countArr[i] > countArr[max]) {
			max = i;
		}
	}
	cout << endl << max << " " << countArr[max];
	return 0;
}
