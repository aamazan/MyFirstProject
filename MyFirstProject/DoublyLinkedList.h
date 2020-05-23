#ifndef DOUBLYLINKEDLIST_H_INCLUDED // guard wrapper
#define DOUBLYLINKEDLIST_H_INCLUDED

#include <iostream>
#include <string>

struct node;

class DoublyLinkedList {
private:
	node *head, *tail;
public:
	DoublyLinkedList() {
		head = NULL;
		tail = NULL;
	}

	void add_node(std::string m, int r);
	void add_node();
	void delete_node(std::string n);
	void print_movies();
};

#endif 