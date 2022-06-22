#include <iostream>
using namespace std;

/*
 ● Read integer N, then print a left angled triangle that has N rows as below:
 5
 *
 **
 ***
 ****
 *****
 */

int main() {
	int X, i = 1;
	cin >> X;
	while (i <= X) {
		int j = 0;
		while (j < i) {
			cout << '*';
			j++;
		}
		i++;
		cout << endl;
	}

	return 0;
}
