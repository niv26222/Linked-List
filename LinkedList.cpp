#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <sstream>
#include <cstdlib>
using namespace std;




class Node
{
public:
	Node* next;
	int data;
};


class LinkedList
{
public:
	int length;
	Node* head;

	LinkedList();
	~LinkedList();
	void add(int data);
	void print();
};

LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList() {
	std::cout << "LIST DELETED";
}

void LinkedList::add(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void LinkedList::print() {
	Node* head = this->head;
	int i = 1;
	while (head) {
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}

int main(int argc, char const *argv[])
{
	int x;
	LinkedList* list = new LinkedList();
	for (int i = 0; i < 100; ++i)
	{
		list->add(rand() % 100);
	}
	list->print();
	std::cout << "List Length: " << list->length << std::endl;


	delete list;
	cin >> x;
	return 0;
}