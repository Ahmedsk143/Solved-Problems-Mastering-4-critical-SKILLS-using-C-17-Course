#include <iostream>
using namespace std;

/*
 ● Count How many X, Y numbers such that
 ○ X in range [50-300]
 ○ Y in range [70-400]
 ○ X < Y
 ○ (X+Y) divisible by 7
 ● Output
 ○ 8040

 */
int main() {
	int count = 0;

	for (int x = 50; x <= 300; x++) {
		for (int y = 70; y <= 400; y++) {
			if (x < y && ((x + y) % 7 == 0)) {
				count++;
			}
		}
	}
	cout << count << endl;

	// better way
	int cnt = 0;

	for (int x = 50; x <= 300; x++) {
		// the problem is after x = 70
		// assume x = 200, looping y from 70 to 200 is a waste
		// that's because x < y
		int yLoopStart = 70;
		if (yLoopStart < x + 1) //x = 200
			yLoopStart = x + 1; // yLoopStart == 201
		//loop from 201 to 400 and apply the condition
		for (int y = yLoopStart; y <= 400; y++) {
			if ((x + y) % 7 == 0) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
