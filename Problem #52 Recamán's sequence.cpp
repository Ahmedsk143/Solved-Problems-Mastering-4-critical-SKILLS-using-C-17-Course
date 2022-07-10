#include <iostream>
using namespace std;

/*

 ● The first terms of this sequence are 0, 1, 3, 6, 2, 7, …
 ○ So last term value is 7 and its index is 5 (zero based)
 ○ The next value is either:
 ■ LastValue - LastIndex - 1 if the following 2 conditions are satisfied:
 ● value > 0 and It did not appear before
 ● E.g. 7 (last value) - last index (5) - 1 = 7-5-1 = 1 (> 0 but already exists)
 ■ Or LastValue + LastIndex + 1 = 7+5+1 = 13
 ● Read integer zero-based index ([1, 200]) and print the value of this index
 ○ E.g. (6 ⇒ 13), (9 ⇒ 21), (17 ⇒ 25)
 ● Don’t use nested loops
 ● The series is: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22, 10, 23, 9, 24, 8, 25, 43
 */
int main() {
	int num, arr[201], apper[3000] { 0 };
	arr[0] = 0;
	apper[0] = 1;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		int eq = arr[i - 1] - (i - 1) - 1;
		if (eq > 0 && apper[eq] == 0) {
			arr[i] = eq;
			apper[eq] = 1;
		} else {
			eq = arr[i - 1] + (i - 1) + 1;
			apper[eq] = 1;
		}
		arr[i] = eq;
	}
	cout << arr[num];
	return 0;
}

