#include <iostream>
#include <conio.h>
#include <string>
#include "fib.cpp"
using namespace std;
// Refresher program to cover functions, operations, pointers, classes, etc

void main() {

	int num = -1;
	while (num != 0) {
		cout << "Please select an option:" << endl;
		cout << "1: Print N numbers of Fibonacci Sequence" << endl;
		cout << "2: Add movies to a LinkedList" << endl;
		cout << "3: Sort movies" << endl;
		cout << "4: Delete movies" << endl;
		cout << "0: Quit" << endl;
		cin >> num;
		switch (num) {
		case 0: break;
		case 1: fib(); break;
		case 2: break;
		case 3: break;
		case 4: break;
		default:
			cout << "Error. Please enter one of the options given." << endl;
			break;
		}
	}

	//_getch(); // keeping this for use in later code (rather than using pause)
	return;
}