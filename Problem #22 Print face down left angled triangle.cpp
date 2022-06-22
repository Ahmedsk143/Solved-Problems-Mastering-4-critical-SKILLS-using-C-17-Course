#include <iostream>
using namespace std;

/*
 ● Read integer N, then print a face down left angled triangle that has N rows
 9
 ******
 *****
 ****
 ***
 **
 *

 */

int main() {
	int X;
	cin >> X;
	while (X) { // = while (X > 0)
		int j = 0;
		while (j < X) {
			cout << '*';
			j++;
		}
		X--;
		cout << endl;
	}

	return 0;
}
