#include "linked_list.h"

void cnt::LinkedList::append(int val) {
	if (tail_) {
		tail_->next = new Node(val, nullptr);
		tail_ = tail_->next;
		size_++;
	} else {
		head_ = new Node(val, nullptr);
		tail_ = head_;
	}
}

void cnt::LinkedList::print() const {
	std::cout << "[ ";
	Node* walker = head_;
	while (walker) {
		std::cout << walker->value << " ";
		walker = walker->next;
	} std::cout << "]" << std::endl;
}
