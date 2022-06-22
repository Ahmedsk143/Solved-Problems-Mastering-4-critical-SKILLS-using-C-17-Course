#include <iostream>
using namespace std;

/*
 ● Read 4 numbers representing 2 intervals and print their intersection interval. If
 they don’t intersect, print -1
 ● Inputs
 ○ 1 6 3 8 ⇒ 3 6
 ■ Interval [1 6] and [3 8] only intersects at [3, 6]
 ■ Why: interval [1, 6] has numbers: {1, 2, 3, 4, 5, 6}
 ■ And: interval [3, 8] has numbers: {3, 4, 5, 6, 7, 8}
 ■ So the intersection is {3, 4, 5, 6} = [3, 6]
 ○ 1 15 20 30 ⇒ -1
 */

int main() {
	int s1, e1, s2, e2;
	cin >> s1 >> e1 >> s2 >> e2;
	if (e1 < s2 || e2 < s1) {
		cout << -1;
	} else {
		if (s2 > s1)
			s1 = s2;
		if (e2 < e1)
			e1 = e2;
		cout << s1 << " " << e1;

	}

	return 0;
}
