#include <iostream>
using namespace std;
/*
 *
 ● Read integer N ( < 1000), followed by reading N integers (0 <= value <= 500)
 ● The N numbers are ordered from small to large
 ● Print the unique list of the numbers, but preserve the given order
 ● Input: 12 1 1 2 2 2 5 6 6 7 8 9 9
 ● Output: 1 2 5 6 7 8 9
 ○ Observe: input is sorted list
 ● Optional Constraints:
 ○ Don’t use nested loops!
 ○ Use only 1 single array
 ○ Or Do it without even using arrays at all*/
int main() {
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] != arr[i - 1]) {
			cout << arr[i];
		}
	}

	return 0;
}
