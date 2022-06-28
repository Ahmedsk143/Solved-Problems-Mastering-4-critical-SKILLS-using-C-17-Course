#include <iostream>
using namespace std;
/*
● Read an integer N (< 200), then read N integers.
○ Assume all values [0, 2000]
● Print the array after doing the following operations:
○ Find minimum number in these numbers.
○ Find maximum number in these numbers.
○ Replace each minimum number with maximum number and Vise Versa.
● Input ⇒ Output
○ 7 4 1 3 10 8 10 10 ⇒ 4 10 3 1 8 1 1

 */
int main() {
	int N, max = 0, min = 0;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] > arr[max]) {
			max = i;
		}
		if (arr[i] < arr[min]) {
			min = i;
		}
	}
	min = arr[min];
	max = arr[max];
	for (int i = 0; i < N; i++) {
		if (arr[i] == max) {
			arr[i] = min;
//			cout << arr[i] << " " << min <<" ";
		} else if (arr[i] == min) {
			arr[i] = max;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
