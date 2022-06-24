#include <iostream>
using namespace std;

/*
 ● Read integer N (<500), then print all prime numbers <= N
 ○ Output should be comma separated, as below
 ■ Don’t print comma after the last number
 ● Input ⇒ Output
 ○ 18 ⇒ 2,3,5,7,11,13,17
 ■ No comma after last number!
 */
int main() {
	int N;
	cin >> N;
	for (int k = 2; k <= N; k++) {
		int prime = 0;
		for (int i = 2; i <= k; i++) {
			if (k % i == 0) {
				prime++;
			}
		}
		if (prime == 1 && (k == N - 1 || k == N - 2 || k == N - 3)) {
			cout << k;
		} else if (prime == 1) {
			cout << k << ",";
		}

	}
	return 0;
}
