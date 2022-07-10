#include <iostream>
using namespace std;

/*

 Read an Integer N, then read N (< 200) integers.
 ● Output: Count how many subarrays are increasing in the array.
 ● E.g. If input is 1 2 3 4
 ○ We can find all sublists of length 1 ⇒ [1], [2], [3], [4]
 ○ All sublists of length 2 ⇒ [1, 2], [2, 3], [3, 4]
 ○ All sublists of length 3 ⇒ [1, 2, 3], [2, 3, 4]
 ○ All sublists of length 4 ⇒ [1, 2, 3, 4]
 ● Inputs ⇒ Outputs
 ○ 4 1 2 3 4

 ⇒ 10 [10 sub-arrays from previous example, all are increasing]
 ○ 4 4 3 2 1 ⇒ 4 [only sub-arrays of length 1 can be considered]
 ○ 4 10 20 1 5 ⇒ 6
 ● Easy using 3 nested loops. Medium using 2 loops. Hard with 1 loop

 */
int main() {
	int N;
	cin >> N;
	int cnt = N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
//		All sublists of length 2
	for (int i = 1; i < N; i++) {
		if (arr[i] > arr[i - 1]) {
			cnt++;
		}
	}
//		All sublists of length 3
	for (int i = 1; i < N - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] < arr[i + 1]) {
			cnt++;
		}

	}
//		All sublists of length 4
	for (int i = 1; i < N - 2; i++) {
		if (arr[i] > arr[i - 1] && arr[i] < arr[i + 1]
				&& arr[i + 1] < arr[i + 2]) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}

