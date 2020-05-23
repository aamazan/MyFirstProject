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

	void DoublyLinkedList::delete_node() {
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
				cout << current->name << ", rating: " << current->rating << endl;
				current = current->next;
			} while (current != tail);
			cout << "End of list. Returning to main menu." << endl;
		}
	};
	
	

	




