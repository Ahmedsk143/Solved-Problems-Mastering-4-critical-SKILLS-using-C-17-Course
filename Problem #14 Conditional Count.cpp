#include <iostream>
#include <math.h>
using namespace std;
/*
 ● Write a program that reads number X, then other 5 numbers. Print 2 values:
 ○ How many numbers <= X
 ○ How many numbers > X
 ○ Any relation between these 2 outputs?
 ● Inputs
 ○ 10 300 1 5 100 200
 ○ Output: 2 3
 ○ Explantation
 ○ 2 numbers (1, 5) are <= 10
 ○ 3 numbers (100, 200, 300) are > 10
 */
int main() {
	int X, n1, n2, n3, n4, n5, cnt1 = 0, cnt2 = 0;
	cin >> X >> n1 >> n2 >> n3 >> n4 >> n5;
	if (n1 <= X)
		cnt1++;
	else
		cnt2++;
	if (n2 <= X)
		cnt1++;
	else
		cnt2++;
	if (n3 <= X)
		cnt1++;
	else
		cnt2++;
	if (n4 <= X)
		cnt1++;
	else
		cnt2++;
	if (n5 <= X)
		cnt1++;
	else
		cnt2++;
	cout << cnt1 << " " << cnt2;

	return 0;
}
