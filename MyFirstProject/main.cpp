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
		case 3: 
			// input name of movie
			// pass to delete function
			break;
		case 4: 
			// take a number from 0-3 for sort, 4 to exit, throw an error and prompt for new input if unexpected
			// TODO: A-Z sort
			// TODO: Z-A sort
			// TODO: Ascending rating
			// TODO: Descending rating
			break;
		case 5: l->print_movies();
			break;
		default:
			cout << "Error. Please enter one of the options given." << endl;
			break;
		}
	}

	return;
}