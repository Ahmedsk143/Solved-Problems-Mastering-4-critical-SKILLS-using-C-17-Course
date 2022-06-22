#include <iostream>
using namespace std;

/*
 ● Read an integer N (1 <= 30): Print the first N numbers that are
 ○ multiple of 3 but not multiple of 4
 ● Input: 11
 ● Output: 3 6 9 15 18 21 27 30 33 39 42
 ● Notice
 ○ 12 is divisible by both 3 and 4 ⇒ so excluded
 */

int main() {
	int num, i = 1, cnt = 0;
	cin >> num;
	while (i <= 150) {
		if (i % 3 == 0 && i % 4 != 0 && cnt < num) {
			cout << i << " ";
			cnt++;
		}
		i++;
	}
	cout<<endl<<cnt;
	return 0;
}
