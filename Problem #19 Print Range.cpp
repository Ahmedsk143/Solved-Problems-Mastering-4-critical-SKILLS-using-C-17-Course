#include <iostream>
using namespace std;

/*
 ● Given a starting number X and an ending number Y, print all numbers
 between X and Y inclusive, each on a line.
 ● Input 3 7
 ● Output
 ○ 3
 ○ 4
 ○ 5
 ○ 6
 ○ 7
 */

int main() {
	int X, Y;
	cin >> X >> Y;
	while (X <= Y) {
		if (X == Y)
			cout << X;
		else
			cout << X << endl;
		X++;
	}

	return 0;
}
