#include <iostream>
using namespace std;

/*
 ● Read an integer N and M, then print NxM lines for their multiplication table.
 ● Input 3 4
 ● Output
 ○ 1 x 1 = 1
 ○ 1 x 2 = 2
 ○ 1 x 3 = 3
 ○ 1 x 4 = 4
 ○ 2 x 1 = 2
 ○ 2 x 2 = 4
 ○ 2 x 3 = 6
 ○ 2 x 4 = 8
 ○ 3 x 1 = 3
 ○ 3 x 2 = 6
 ○ 3 x 3 = 9
 ○ 3 x 4 = 12
 */

int main() {
	long N, M;
	cin >> N >> M;
	int i = 1;
	while (i <= N) {
		int j = 1;
		while (j <= M) {
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
		i++;

	}

	return 0;
}
