#include <iostream>
using namespace std;

/*
 ● Read Integers K and N, (where K <= N). then read N < 200 integers.
 ● Find sub-array (consecutive numbers) of K elements that has maximum sum
 ● Input 3 7 1 0 3 -4 2 -6 9
 ○ Let’s list all sub-arrays of length 3
 ○ 1 0 3 ⇒ sum = 4
 ○ 0 3 -4 ⇒ sum = -1
 ○ 3 -4 2 ⇒ sum = 1
 ○ -4 2 -6 ⇒ sum = -8
 ○ 2 -6 9 ⇒ sum = 5
 ● Output: 4 6 5 (Sub-array from indices 4 to 6 has maximum sum of 5)
 ● Can you do it without nested loops? There are 2 ways.
 */
int main() {
	int k, n, maxSum = 0, start;
	cin >> k >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i <= n - k; i++) {
		int sum = 0;
		for (int s = i; s < i + k; s++) {
			sum += arr[s];
		}
		if (maxSum < sum) {
			maxSum = sum;
			start = i;
		}
	}
	cout << start << " " << start + k - 1 << " " << maxSum;
	return 0;
}

