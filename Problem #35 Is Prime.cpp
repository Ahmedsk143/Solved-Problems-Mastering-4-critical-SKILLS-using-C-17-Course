#include <iostream>
using namespace std;

/*

 ● Read an integer N (< 500) and print YES if it is prime, otherwise NO
 ○ A prime N is greater than 1 AND cannot be formed by multiplying two smaller Ns.
 ■ In other words, N%whatever != 0
 ■ The first few prime Ns are 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
 ● Input ⇒ Output
 ○ 13 ⇒ YES (only 1 * 13)
 ○ 12 ⇒ NO (E.g. 12 = 2 *6, so 12 can be divided by 2 or 6)

 */
int main() {
	int N, prime = 0;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		if (N % i == 0) {
			prime++;
		}
	}
	if (prime == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	// Another solution//

	if (N <= 1)
		cout << "NO\n";
	else {
		bool is_ok = true;

		for (int i = 2; i < N; ++i) {
			if (N % i == 0) {
				is_ok = false;
				break;
			}
		}

		if (is_ok)
			cout << "YES";
		else
			cout << "NO";
	}

	return 0;
}
