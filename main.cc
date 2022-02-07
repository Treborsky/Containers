// 
// Created by Treborsky
//
// Program for testing my linked list
//

#include <string>
#include <iostream>

#include "lib/linked_list.h"

int main() {
	std::cout << "Creating a list of length 3, printing the values and then deleting it." << std::endl;
	
	// creation
	cnt::LinkedList list;
	
	// element addition
	list.append(1);
	list.append(2);
	list.append(3);
	
	// printing
	list.print();

	// deletion when list goes out of scope
}
