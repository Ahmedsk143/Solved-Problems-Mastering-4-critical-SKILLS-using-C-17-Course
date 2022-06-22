#include <iostream>
using namespace std;

/*
 Read an integer N, then print diamond of 2N rows as below
 5
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *

 */

int main() {
	//number of spaces in each row = N - row
	//number of * in each row = 2*row - 1

	int num, i = 1;
	cin >> num;
	while (i <= num) {
		int j = 1;
		while (j <= (num - i)) {
			cout << " ";
			j++;
		}
		j = 1;
		while (j <= (2 * i - 1)) {
			cout << "*";
			j++;
		}
		i++;
		cout << endl;
	}
	i = num;
	while (i > 0) {
		int j = 1;
		while (j <= (num - i)) {
			cout << " ";
			j++;
		}
		j = 1;
		while (j <= (2 * i - 1)) {
			cout << "*";
			j++;
		}
		cout << endl;
		i--;
	}

	return 0;
}
