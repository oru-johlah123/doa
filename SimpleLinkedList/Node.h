#pragma once

#include <iostream>

using namespace std;

template <class INFO>
/** Class Node, a single data node for the linked list class */
class Node
{
public:

	INFO info;
	Node<INFO> *next;
	Node(void)
	{
		this->next = nullptr;
	}

	Node(INFO info)
	{
		this->info = info;
		this->next = nullptr;
	}

	~Node(void)
	{
	}
};
