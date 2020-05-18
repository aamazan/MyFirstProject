#include <iostream>
#include <conio.h>
#include <string>

// Refresher program to cover functions, operations, etc.



void fib() {
	unsigned int n = -1;
	int a = 0; int b = 1; int temp;
	std::cout << "Please enter how many values of the Fibonacci Sequence you wish to print." << std::endl;
	std::cout << "Enter 0 if you wish to exit back to the main menu" << std::endl;
	std::cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			std::cout << a << " ";
			temp = a + b;
			a = b;
			b = temp;
		}
		std::cout<< "" <<std::endl;
		std::cout << "Operation completed. Returning to main menu." << std::endl;
		std::cout << "" << std::endl;
	}
	else if (n == 0) {
		return;
	}
	else {
		std::cout << "Incorrect input. Please input a positive integer or 0." << std::endl;
		fib();
	}
	return;
}

void main() {

	int num = -1;
	while (num != 0) {
		std::cout << "Please select an option:" << std::endl;
		std::cout << "1: Print N numbers of Fibonacci Sequence" << std::endl;
		std::cout << "2: Add movies to a LinkedList" << std::endl;
		std::cout << "3: Sort movies" << std::endl;
		std::cout << "4: Delete movies" << std::endl;
		std::cout << "0: Quit" << std::endl;
		std::cin >> num;
		switch (num) {
		case 0: break;
		case 1: fib(); break;
		case 2: break;
		case 3: break;
		case 4: break;
		default:
			std::cout << "Error. Please enter one of the options given." << std::endl;
			break;
		}
	}

	//_getch();
	return;
}