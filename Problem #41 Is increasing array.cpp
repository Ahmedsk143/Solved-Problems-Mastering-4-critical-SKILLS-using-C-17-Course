#include <iostream>
using namespace std;
/*
Read an Integer N, then read N (<= 200) integers. 
● Print YES if the array is increasing. 
○ An array is increasing if every element is >= the previous number
● Inputs 
○ 4 1 2 2 5
 
⇒ YES
○ 5 1 0 7 8 9
 
⇒ NO [0 is < 1, the previous number]
○ 2 -10 10 ⇒ YES 

*/
int main() {
	int N, prev;
	cin >> N;
	int arr[N];
	cin >> arr[0];
	prev = arr[0];
	for (int i = 1; i < N; i++) {
		cin >> arr[i];
		if (arr[i] < prev) {
			prev = -1;
			break;
		}
		prev = arr[i];
	}
	if (prev == -1) {
		cout << "NO";
	} else {
		cout << "YES";
	}

	return 0;
}
