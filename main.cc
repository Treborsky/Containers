// 
// Created by Treborsky
//
// Program for testing my linked list
//

#include <string>
#include <iostream>

struct Node {
	Node(int val=0, Node* ptr=nullptr) : value(val), next(ptr) {} 
	~Node() { delete next; }
	int value;
	Node* next;
};

class List {
	public:
		List() : size_(0) {
			head_ = nullptr;
			tail_ = head_;
		}

		~List() { delete head_; } // will call the node destructor, recursively deleting the entire list

		void append(int val) { 
			if (tail_) {
				tail_->next = new Node(val, nullptr);
				tail_ = tail_->next;
				size_++;
			} else {
				head_ = new Node(val, nullptr);
				tail_ = head_;
			}
		}

		void print() const {
			std::cout << "[ ";
			Node* walker = head_;
			while (walker) {
				std::cout << walker->value << " ";
				walker = walker->next;
			} std::cout << "]" << std::endl;
		}

		const int get_size() const { return size_; }

	private:
		int size_;
		Node* head_;
		Node* tail_;
};

int main() {
	std::cout << "Creating a list of length 3, printing the values and then deleting it." << std::endl;
	
	// creation
	List list;
	
	// element addition
	list.append(1);
	list.append(2);
	list.append(3);
	
	// printing
	list.print();

	// deletion when list goes out of scope
}
