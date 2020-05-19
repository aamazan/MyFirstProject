#include "LinkedList.h"
using namespace std;

// Class definition for Linked List

struct node {
private:
	struct node *next;
public:
		string name;
		int rating;
};

class linkedList{
private:
	node *head, *tail;
public:
	linkedList() {
		head = NULL;
		tail = NULL;
	}


};

