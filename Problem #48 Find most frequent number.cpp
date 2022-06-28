#include <iostream>
using namespace std;
/*
 ● Read an Integer N, then read N <= 200 integers. Find the value that repeated
 the most number of times.
 ○ Each integer is -500 <= value <= 270
 ● Example for array: 7 -1 2 -1 3 -1 5 5
 ○ -1 repeated 3 times: the largest
 ● Don’t use nested loops
 */
int main() {
	int N;
	cin >> N;
	int arr[N], count[N] { 0 };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		count[arr[i]]++;
	}
	int max = -500;
	for (int i = 0; i < N; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}
	cout << arr[max];
	return 0;
}
