#include <iostream>
using namespace std;
/*

 ● Read an Integer N, then read N <= 200 integers [0 <= A[i] <= 500].
 ○ We will search in this array for numbers
 ● Then read integer Q (for a number of queries), then read Q integers
 ○ For each integer, find the last occurance in the array. Print its index
 ○ If doesn’t exist, print -1
 ● Input 5 1 2 7 3 7 3 7 9 2
 ○ Means Array of 5 numbers (1 2 7 3 7) and 3 queries (7 9 2)
 ● Output
 ○ 4 [7 exists in 2 positions (2 and 4). The last is 4)
 ○ -1 [9 doesn’t exist)
 ○ 1 [2 exists only in position 1]
 ● Do it first with nested loops. Can you do without any nested loops?
 */
int main() {
	int N, Q;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> Q;
	int arr2[Q];
	for (int i = 0; i < N; i++) {
		cin >> arr2[i];
		int last = -1;
		for (int k = 0; k < N; k++) {
			if (arr2[i] == arr[k]) {
				last = k;
			}
		}
		cout << last << endl;
	}
	return 0;
}
