#include <iostream>
#include <string>
using namespace std;
// Fibonacci Sequence print function

void fib() {
	int n = -1;
	int a = 0; int b = 1; int temp;
	cout << "Please enter how many values of the Fibonacci Sequence you wish to print." << endl;
	cout << "Enter 0 if you wish to exit back to the main menu." << endl;
	cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			cout << a << " ";
			temp = a + b; // store sum in temp variable
			a = b; // shift a forward in sequence
			b = temp; // shift b forward in sequence
		}
		cout << "" << endl;
		cout << "Operation completed. Re5turning to main menu." << endl;
		cout << "" << endl;
	}
	else if (n == 0) {
		return;
	}
	else {
		cout << "Incorrect input. Please input a positive integer or 0." << endl;
		fib();
	}
	return;
}