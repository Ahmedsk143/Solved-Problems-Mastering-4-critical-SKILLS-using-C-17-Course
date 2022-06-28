#include <iostream>
using namespace std;
/*

 ● Read integer N (< 1000), then read N integers of an array.
 ● Determine if the array is palindrome or not.
 ● An array is called palindrome if it reads the same backward and forward
 ○ for example, arrays { 1 } and { 1,2,3,2,1 } are palindrome
 ○ while arrays { 1,12 } and { 4,7,5,4 } are not.
 ● Inputs ⇒ Outputs
 ○ 5 1 3 2 3 1

 ⇒ YES
 ○ 4 1 2 3 4 ⇒ NO
 */
int main() {
	int N;
	bool isPalind = true;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	// 0 1 2 3 4 5
	for (int i = 0; i < N/2; i++) {
		if (arr[i] == arr[N - 1 - i])
			continue;
		else
			isPalind = false;
	}
	if (isPalind)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
