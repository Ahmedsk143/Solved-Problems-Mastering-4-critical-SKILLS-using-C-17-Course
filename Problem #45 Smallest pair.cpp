#include <iostream>
using namespace std;
/*

 ● Given a number N (<= 200) and an array A of N numbers.
 ● Print the smallest possible result of A[i] + A[j] + j - i , where 1  ≤  i < j  ≤  N.
 ● Input ⇒ Output
 ○ 4 20 1 9 4

 ⇒ 7
 */
int main() {
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int min = arr[0];
	for (int i = 1; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int temp = arr[i] + arr[j] + j - i;
			if (min > temp) {
				min = temp;
			}
		}
	}
	cout << min;

	return 0;
}
