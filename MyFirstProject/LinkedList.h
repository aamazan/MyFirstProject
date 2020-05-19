#include <iostream>
#include <string>

struct node {
	struct node *next;
	struct node *prev;
	string name;
	int rating;
};

class LinkedList {
private:
	node *head, *tail;
public:
	LinkedList() {
		head = NULL;
		tail = NULL;
	}
};

void add_node(string m, int r);
void delete_node(string m);
void print_movies();