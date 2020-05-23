#include <iostream>
#include <conio.h>
#include <string>
#include "fib.h"
#include "DoublyLinkedList.h"
using namespace std;
// Refresher program to review functions, operations, pointers, classes/structures, etc

void main() {

	int num = -1;
	string nam = "";
	int rat = 0;;

	DoublyLinkedList *l = new DoublyLinkedList();

	while (num != 0) {
		cout << "Please select an option:" << endl;
		cout << "1: Print N numbers of Fibonacci Sequence" << endl;
		cout << "2: Add movies to a list" << endl;
		cout << "3: Delete a movie" << endl;
		cout << "4: Sort movies by name A-Z, Z-A, or by ascending or descending rating" << endl;
		cout << "5: Print movies in their current order" << endl;
		cout << "0: Quit" << endl; 
		cin >> num;
		switch (num) {
		case 0: break;
		case 1: fib(); break;
		case 2: 
			cout << "Please enter the name of the movie: ";
			cin >> nam;
			cout << endl;
			cout << "Please enter the rating for the movie: ";
			cin >> nam;
			l->add_node(nam, rat);
			cout << nam << " added to the list." << endl;
				break;
		case 3: break;
			// need to figure out some basic sorting algs to put here
		case 4: break;
		case 5: l->print_movies();
			break;
		default:
			cout << "Error. Please enter one of the options given." << endl;
			break;
		}
	}

	return;
}