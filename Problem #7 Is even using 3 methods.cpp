#include <iostream>
#include <math.h>
using namespace std;
/*
 The following code reads an integer and computes
 a boolean if the number is even in 3 different ways.
 Fill in the is_even to solve the problem in 3 ways as
 following
 Using only %2
 Using only /2
 Using only %10
 */
int main() {
	int num;
	cin >> num;
	//using %2
	bool is_even1 = (num % 2 == 0);

	//using /2
	bool is_even2 = ((num / 2.0) == (int) (num / 2));

	//using %10
	bool is_even3 = (num % 10 == 0 || num % 10 == 2 || num % 10 == 4
			|| num % 10 == 6 || num % 10 == 8);

	cout << is_even1 << endl << is_even2 << endl << is_even3;
	return 0;
}
