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
	void delete_node(std::string n);
	void print_movies();
	int length();
	void az_sort();
	void za_sort();
	void up_sort();
	void down_sort();
	int partition(node n, int p, int r);
};

#endif 