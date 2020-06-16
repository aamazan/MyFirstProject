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
			// tail->next = NULL; // Null at tail for easier counting
		}
	}

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
	}

	void DoublyLinkedList::print_movies() { // nullptr violation fixed, but it's only printing one movie despite the contents of the DLL
		node *current = new node;
		current = head;
		if (current == NULL) {
			cout << "There are no movies in the list. Returning to main menu." << endl;
			delete(current);
			return;
		}
		else {
			do {
				cout << current->name << ", rating: " << current->rating << endl; // where nullptr violation was previously thrown
				if(current != tail) current = current->next;
			} while (current != tail);
			cout << "End of list. Returning to main menu." << endl;
			delete(current);
		}
		return;
	}

	int DoublyLinkedList::length() {
		node *tester = new node;
		tester = head;
		int count = 0;
		if (head == NULL) {
			cout << "There is nothing in the list." << endl;
			return 0;
		}
		else {
			while (tester != NULL) {
				count++;
				tester = tester->next;
			}
			delete(tester);
			return count;
		}

	}
	
	void DoublyLinkedList::az_sort() {
		// quicksort variant here
	}
	
	void DoublyLinkedList::za_sort() {
		// quicksort variant here
	}

	void DoublyLinkedList::up_sort() {
		// quicksort variant here
	}
	void DoublyLinkedList::down_sort() {
		// quicksort variant here
	}

	int DoublyLinkedList::partition(node n, int p, int r){
		return 0;
	}


