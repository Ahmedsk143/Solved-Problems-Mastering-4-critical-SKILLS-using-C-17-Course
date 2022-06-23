#include <iostream>
using namespace std;

/*
 Read an Integer N, then print an X using * as following
 N always odd
5
*   *
 * *
  *
 * *
*   *


 */
int main() {
	//                 first digonal      && second digonal
	//       12345     intersects at i*j  && intersects at x
	//  1 => *   * ==> 1x1                && 1x5
	//  2 =>  * *  ==> 2x2                && 2x4
	//  3 =>   *   ==> 3x3                && 3x3
	//  4 =>  * *  ==> 4x4                && 4x2
	//  5 => *   * ==> 5x5                && 5x1

	int X;
	cin >> X;
	for(int i = 1 ; i <= X ; i++){
		for(int j = 1 ; j <= X ; j++ ){
			if(i == j || X-i == j - 1 ){
				cout<<"*";
			} else{
				cout<< " ";
			}
		}
		cout<<endl;
	}
return 0;
}
