#include "DoublyLinkedList.h"
using namespace std;

// Member functions for Doubly Linked List class and nodes with name strings and int ratings

struct node {
	struct node *next;
	struct node *prev;
	string name;
	int rating;
};



	void DoublyLinkedList::add_node(string m, int r) {
		node *temp = new node;
		temp->name = m;
		temp->rating = r;
		temp->prev = head;
		temp->next = tail;

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			temp->prev = tail;
			tail = tail->next;
		}
	};

	void DoublyLinkedList::delete_node(string n) {
		node *tester = new node;
		tester = head;
		while (tester->name != n) {
			if (tester == tail) {
				cout << "Sorry, that movie isn't in the list. Returning to main menu." << endl;
				return;
			}
			else {
				tester = tester->next; // iterate through nodes until you find the one to delete
			}
		}
		
		// deletion procedure
		tester->prev->next = tester->next;
		tester->next->prev = tester->prev;
		delete(tester);
		return;
	};

	void DoublyLinkedList::print_movies() {
		node *current = new node;
		if (head == NULL) {
			cout << "There are no movies in the list. Returning to main menu." << endl;
			delete(current);
			return;
		}
		else {
			current = head;
			do {
				cout << current->name << ", rating: " << current->rating << endl; // TODO: nullptr violation thrown
				current = current->next;
			} while (current != tail);
			cout << "End of list. Returning to main menu." << endl;
		}
		return;
	};
	
	

	




